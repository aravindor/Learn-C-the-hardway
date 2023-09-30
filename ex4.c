#include "stdio.h"

int main(int argc, char *argv[]){
    printf("I got %d argc \n",argc);
    if (argc == 2){
        printf("You have only one args \n");
    } else if (argc == 3){
        printf("Ready to go \n");
        for (int i = 1; i < argc; ++i) {
//            printf("%s",argv[i]);
            printf("%s \n",argv[i]);
        }
    } else{
        printf("You are doing to much");
    }
    return 0;
}