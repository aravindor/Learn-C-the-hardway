#include "stdio.h"

int main(){
    int numbers[4] ={0};
    char name[4]={'a'};
    printf("The numbers are : %d %d %d %d \n",numbers[0],numbers[1],numbers[2],numbers[3]);
    printf("The name is : %c %c %c %c  \n",name[0],name[1],name[2],name[3]);
    printf("The name string : %s",name);

    numbers[0]=1;
    numbers[1]=2;
    numbers[2]=3;
    numbers[3]=4;

    name[0] = 'l';
    name[1] = 'u';
    name[2] = '7';
    name[3] = '\0';
    printf("The numbers are : %d %d %d %d \n",numbers[0],numbers[1],numbers[2],numbers[3]);
    printf("The name is : %c %c %c %c  \n",name[0],name[1],name[2],name[3]);
    printf("The name string : %s",name);

    char *another = "lu7";
    printf("another : %s \n",another);
    printf("Another  : %c %c %c %c  \n",another[0],another[1],another[2],another[3]);
    printf("Size of int pointer: %zu bytes\n", sizeof(int*));
}