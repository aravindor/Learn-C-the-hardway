#include <stdio.h>
#include <string.h>

int validCopy(const char *from,int count, char expected){
    for(int i = 0; i<count;i++){
        if (from[i] != expected){
            return 0;
        }
    }
    return 1;
}

int  normalCopy(char *from , char *to ,int count){
    for(int i =0;i<count;i++){
        to[i] = from[i];
    }
    return 1;
}

int main(){
    char from[100];
    char to[100];
    memset(from,'x',100);
    memset(to,'y',100);

    printf("Is valid %d \n", validCopy(from,100,'x'));

    normalCopy(from,to,100);

    printf("Is valid normal copy %d \n", validCopy(to,100,'x'));
    printf("%s \n",to);
    return 0;
}
