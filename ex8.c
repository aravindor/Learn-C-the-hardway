#include "stdio.h"

void printLetters(const char *item){
    int i =0;
    for ( i =0;item[i]!='\0';i++ ){
        printf("%c\n",item[i]);
    }
}

void printArgs(int argc,char *args[]){
    for (int i = 1; i < argc; ++i) {
        printLetters(args[i]);
    }
}

int main(int argc,char *args[]){
    if (argc ==1){
        printf("Enter at least one arg \n");
        return 1;
    }
    printArgs(argc,args);
}
