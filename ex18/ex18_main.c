#include <stdio.h>
#include "ex18.h"

const char *myName = "Aravind";
void scopeDemo(int count){
    printf("The count is %d \n",count);
    if(count>10){
        count = 100;
        printf("Count in this scope is %d \n",count);
    }
    printf("Count is at exit %d \n",count);
    count = 3000;
    printf("Count after assign is %d \n",count);
}
int main(){
    printf("My name is %s , age %d \n",myName,get_age());
    set_age(100);
    printf("New age %d \n",get_age());
    printf("The size is %d \n",THE_SIZE);
    THE_SIZE = 123;
    print_size();
    printf("Ratio update 1 %f \n", update_ratio(1.12));
    printf("Ratio update 2 %f \n", update_ratio(1.13));
    printf("Ratio update 3 %f \n", update_ratio(1.14));

    int count =4;
    scopeDemo(count);
    scopeDemo(count*20);
    printf("Count after calling scope %d \n",count);
    return 0;
}