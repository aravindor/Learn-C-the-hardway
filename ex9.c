#include "stdio.h"

int main(){
    int ages [] = { 23, 43, 12, 89, 2};

    char *names[] = {"Alan", "Frank","Mary", "John", "Lisa"};

    for (int i = 0; i < 5; ++i) {
        printf("%s is %d year old \n",names[i],ages[i]);
    }
    printf("---\n");
    printf("Ages pointer %p \n",&ages);
    printf("Ages pointer value %d \n",*ages+1);
    printf("---\n");
    int *curAge = ages;
    char **curName = names;

    for (int i = 0; i < 5; ++i) {
        printf("%s is %d year old \n",*(curName+i),*(curAge+i));
    }
    printf("---\n");
    for (int i = 0; i < 5; ++i) {
        printf("%s is %d year old \n",curName[i],curAge[i]);
    }

    printf("%lu:%lu \n",(unsigned long int)(curAge+4)/4,(unsigned long int)(ages)/4);
    printf("%d \n",(curAge+1-ages));

    printf("---\n");

    for (curAge = ages; curAge-ages < 5; curAge++,curName++){
        printf("%s is %d year old \n",*(curName),*(curAge));
    }

}
