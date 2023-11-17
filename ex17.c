#include <stdio.h>

int main(){
    int count = 0;
    int n = (count+7)/8;

    switch (count %8) {
                case 0:
                    do {
                    printf("In case 0 \n");
                    case 7:
                        printf("In case 7 \n");
                    case 6:
                        printf("In case 6 \n");
                    case 5:
                        printf("In case 5 \n");
                    case 4:
                        printf("In case 4 \n");
                    case 3:
                        printf("In case 3 \n");
                    case 2:
                        printf("In case 2 \n");
                    case 1:
                        printf("In case 1 \n");
                } while (--n > 0);

    }
    return 0;
}