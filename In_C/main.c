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
struct IKEA_ITEM{
    char Name[20];
    int itemID;
    int price;
};

/* Function Prototypes */
void printID(struct studentID person);
void printIKEA(struct IKEA_ITEM *);


int main(){
    struct studentID me = {"BOB", 25, 1996};
    printID(me);

    printf("\n\n");

    struct IKEA_ITEM drawer = {"Alex Drawer", 125, 25};
    struct IKEA_ITEM *item1;
    item1 = &drawer;
    printIKEA(item1);
    printf("IKEA item %s\n", drawer.Name);
    printf("IKEA ID %d\n", drawer.itemID);
    printf("IKEA price $%d\n", drawer.price);
    return 0;
}

/* Function Details */
void printID(struct studentID person){
    printf("Your Name is %s\n", person.Name);
    printf("Your Age is %d\n", person.Age);
    printf("Your date of birth is %d\n", person.Birth_Year);
}
void printIKEA(struct IKEA_ITEM *furniture){
    printf("IKEA item %s\n", furniture->Name);
    printf("IKEA ID %d\n", furniture->itemID);
    printf("IKEA price $%d\n", furniture->price);
    printf("\n\nNow changing members value\n\n");
    /* Changing structure member */
    strcpy(furniture->Name,"power drawer");
    furniture->itemID = 200;
    furniture->price = 300;
}
