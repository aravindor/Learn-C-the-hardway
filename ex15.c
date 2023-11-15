#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int divide(int a,int b){
    return a/b;
}

void doMathOps(int (*func)(int a, int b),int a, int b){
    printf("%d \n",func(a,b));
}
int main(){
    doMathOps(subtract,10,5);
    doMathOps(add,10,5);
    doMathOps(divide,10,5);
    return 0;
}
