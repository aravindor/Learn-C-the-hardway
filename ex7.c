#include "stdio.h"

int main(int argc, char *args[]){
    printf("Argc %d \n",argc);
//    printf("Args %s \n",args);

    if (argc == 1){
        printf("Enter at least one arg \n");
        return 1;
    }
    for (int i = 1;  i < argc ; ++i) {
        char *currentArg = args[i];
        printf("Current arg %s \n",currentArg);
        char firstLetter = currentArg[0];

        switch (firstLetter) {

            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("Letter starts with vowel %c \n",firstLetter);
                break;
            default:
                printf("Letter does not start with vowel \n");

        }
    }
}
