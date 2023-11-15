#include <stdio.h>

int main(){
    int a = 1;
    int b = a;
    b++;
    printf("%p : %p \n",&a,&b);
    printf("%d : %d \n",a,b);

    int c = 1;
    int *d = &c;
    (*d)++;
    printf("%p : %p \n",&c,d);
    printf("%d : %d \n",c,*d);
    return 0;
}
