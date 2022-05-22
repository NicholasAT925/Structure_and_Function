#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Global Variables */
/* Structure Decleration */
struct studentID{
    char Name[50];
    int Age;
    int Birth_Year;
};
/* Function Prototypes */
void printID(struct studentID person);

int main(){
    /* Create struct variables*/
    struct studentID person = {"BOB", 25, 1996};
    // struct studentID person;
    // person.Age = 25;
    // person.Birth_Year = 1996;
    // strcpy(person.Name, "BOB");

        printID(person);
    return 0;
}

/* Function Details */
void printID(struct studentID person){
    printf("Your Name is %s\n", person.Name);
    printf("Your Age is %d\n", person.Age);
    printf("Your date of birth is %d\n", person.Birth_Year);
}

