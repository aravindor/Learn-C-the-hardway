#include <stdlib.h>
#include "stdio.h"

int* sortIt( int array [],int size){

    for (int i=0;i<size-1;i++){
        int swapped = 0;
        for (int j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                swapped = 1;
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            printf("\n");
        }

        for (int k = 0; k < size; ++k) {
            printf("%d,",array[k]);
        }
        printf("\n");
        if (!swapped){
            return array;
        }
    }

    return array;
}
void die(const char *message)
{
    printf("ERROR: %s\n", message);
    exit(1);
}
int main(int argc, char *argv[]){
    if (argc < 2) die("USAGE: ex18 4 3 1 5 6");

    int size = argc-1;
    int *mArray = malloc(size* sizeof(int));
    for (int i = 0; i < size; ++i) {
        mArray[i] = atoi(argv[i+1]);
    }
    int* array  = sortIt(mArray,argc - 1);

    printf("Final : \n");
    for (int k = 0; k < size; ++k) {
        printf("%d,",array[k]);
    }
    printf("\n");
    free(mArray);
    return 0;
}