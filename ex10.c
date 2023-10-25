#include <malloc.h>
#include <assert.h>
#include "stdio.h"

struct Person {
    char *name ;
    int age;
    int married;
};
struct Person *personCreate(char *name,int age,int married){
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);
    who->name = name;
    who->age = age;
    who->married = married;
    return who;
}

void destroyPerson(struct Person *who){
    assert(who!= NULL);
    free(who);
}
void printPerson(struct Person *who){
    printf("Name : %s \n",who->name);
    printf("Age : %d \n",who->age);
    printf("Married %s \n",who->married ? "True" : "False");
}
int main(){
    printf("%lu \n",sizeof(struct Person));
    struct Person *person = personCreate("Abraham",23,0);
    printPerson(person);
    struct Person *person2 = personCreate("Abhirami",22,1);
    printPerson(person2);
    destroyPerson(person);
    destroyPerson(person2);
    return 0;
}
