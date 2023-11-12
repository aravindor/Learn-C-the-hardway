#include "stdio.h"
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}

int divide(int a,int b){
    return a/b;
}

typedef int (*operation) (int a,int b);

void doTheMath(int a,int b ,operation op){
    printf("%d \n",op(a,b));
}

int main(){
    doTheMath(10,5,add);
    doTheMath(10,5,subtract);
    doTheMath(10,5,divide);
    return 0;
}