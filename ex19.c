#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA  100

typedef enum EyeColor{
    BLUE_EYES, GREEN_EYES, BROWN_EYES,
    BLACK_EYES, OTHER_EYES
} EyeColor;
const char *EYE_COLOR_NAMES[] = {
        "Blue", "Green", "Brown", "Black", "Other"
};
typedef struct Person{
    int age;
    char first_name[MAX_DATA];
    char last_name[MAX_DATA];
    enum EyeColor eye;
    float income;
}Person;

void check (int condition,char *message){
    if (!condition){
        printf("%s \n",message);
        exit(0);
    }
}

int main(){
    Person you = {.age=0};
    printf("Enter first name : \n");
    char *in = NULL;
    in = fgets(you.first_name,MAX_DATA-1,stdin);
    check(in != NULL,"Failed to read first name \n");

    printf("Enter last name : \n");
    in = fgets(you.last_name,MAX_DATA-1,stdin);
    check(in != NULL,"Failed to read last name \n");

    printf("How old are you : \n");

    int rc = fscanf(stdin,"%d",&you.age);
    check(rc>0,"You have to enter a number");

    printf("What color are your eyes:\n");
    for (int i = 0; i <= OTHER_EYES; i++) {
        printf("%d) %s\n", i + 1, EYE_COLOR_NAMES[i]);
    }
    printf("> ");
    int eyes = -1;

    rc = fscanf(stdin, "%d", &eyes);
    check(rc > 0, "You have to enter a number.");
    you.eye = eyes - 1;

    check(you.eye <= OTHER_EYES
          && you.eye >= 0, "Do it right, that's not an option");

    printf("How much do you make an hour? ");
    rc = fscanf(stdin, "%f", &you.income);
    check(rc > 0, "Enter a floating point number.");

    printf("----- RESULTS -----\n");
    printf("First Name: %s", you.first_name);
    printf("Last Name: %s", you.last_name);
    printf("Age: %d\n", you.age);
    printf("Eyes: %s\n", EYE_COLOR_NAMES[you.eye]);
    printf("Income: %f\n", you.income);

    return 0;
}
