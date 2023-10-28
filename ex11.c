#include "stdio.h"
#include "stdlib.h"
#include "error.h"
#include "string.h"
#define MAX_DATA  512
#define MAX_ROWS 100

struct Address{
    int id;
    int set;
    char name[MAX_DATA];
};

struct Database{
    struct Address rows[MAX_ROWS];
};

struct Connection{
    FILE *file;
    struct Database *database;
};


void die(char *msg){
    printf("%s \n",msg);
}

void loadDb(struct Connection *connection){
    int rc = fread(connection->database, sizeof(struct Database),1,connection->file);
    if(rc !=1 ) die("Failed to load DB");
}

struct Connection *databaseConnect(char *name, char action) {
    struct Connection *connection = malloc(sizeof(struct Connection));
    if(!connection) die("Memory error");
    connection->database = malloc(sizeof(struct Database));

    if(action =='c'){
        connection->file = fopen(name,"w");
    } else{
        connection->file = fopen(name,"r+");
        if (connection->file){
            loadDb(connection);
        }
    }
    return connection;
}



void databaseDisConnect(struct Connection *connection) {
    if(connection->file){
        fclose(connection->file);
    }
    if(connection->database){
        free(connection->database);
    }
    free(connection);
}

void databaseWrite(struct Connection *connection){
    rewind(connection->file);
    int rc = fwrite(connection->database, sizeof(struct Database),1,connection->file);
    if(rc!=1) die("Failed to write database");
    rc = fflush(connection->file);
    if(rc == -1) die("Cannot flush database");
}

void databaseCreate(struct Connection *connection){
    for (int i = 0;i<MAX_ROWS;i++){
        struct Address address = {.id = i,.set=0};
        connection->database->rows[i]=address;
    }
}

void databaseSet(struct Connection *pConnection, int id, char *name) {
    struct Address *address = &pConnection->database->rows[id];
    if(address->set) die("ID already exists , please remove");
    address->set = 1;
    char *res = strcpy(address->name,name);
    if(!res)die("Unable to set");
}

void getItem(struct Connection *connection,int id){
    struct Address *address = &connection->database->rows[id];
    printf("ID: %d  Name: %s \n",address->id,address->name);
}


int main(int argc, char *argv[]){
    if (argc < 3){
        printf("USAGE: ex11 <dbfile> <action> [action params] \n");
        return 1;
    }
    char *fileName = argv[1];
    char action = argv[2][0];
    printf("Filename : %s action : %c \n",fileName,action);
    int id = 0;
    if (argc > 3) id = atoi(argv[3]);
    if (id>= MAX_ROWS) die("There is not that many records") ;

    struct Connection *connection = databaseConnect(fileName,action);

    switch (action) {
        case 'c':
            databaseCreate(connection);
            databaseWrite(connection);
            break;
        case 'g':
            if (argc != 4) die("Need id ");
            getItem(connection,id);
            break;
        case 's':
            if (argc != 5) die("Need id, name set");
            databaseSet(connection,id,argv[4]);
            databaseWrite(connection);
            break;
        case 'd':
            break;
        case 'l':
            break;
        default:
            die("Invalid action: c=create, g=get, s=set,d=del, l=list");
    }

    databaseDisConnect(connection);
    return 0;
}



