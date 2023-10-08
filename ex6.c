#include "stdio.h"

int main(){
int areas [] = {10,20,30,40,50};
char name[] = "lu7";
char fullName[] = {'l','u','7',' ','3','r','\0'};
    printf("Size of an int %ld \n", sizeof(int));
    printf("size of area %ld \n", sizeof(areas));
    printf("Number of ints : %ld \n", sizeof(areas)/ sizeof(int));
    printf("Size of char : %ld \n", sizeof(char ));
    printf("Size of fullname : %ld \n", sizeof(fullName)/ sizeof(char));
    printf("Size of name : %ld \n", sizeof(name)/ sizeof(name[0]));

    int testArray1[] = {1,2,3,4};
    int testArray2[] = {};

    printf("Test array size : %ld \n", sizeof(testArray1)/ sizeof(testArray1[0]));
    printf("Test array total size : %ld \n", sizeof(testArray2));
    printf("Test array item  : %d \n", testArray2[0]);
    printf("Test array item size : %ld \n", sizeof(testArray2[0]));
    printf("Test array size : %ld \n", sizeof(testArray2)/ sizeof(testArray2[0]));
}
