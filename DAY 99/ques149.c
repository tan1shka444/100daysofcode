#include <stdio.h>
#include <stdlib.h> 

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
   
    struct Person *personPtr;

    personPtr = (struct Person *)malloc(sizeof(struct Person));


    if (personPtr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; 
    }

    printf("Enter name: ");
    scanf("%s", personPtr->name); 

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter height (in meters): ");
    scanf("%f", &personPtr->height);

    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f m\n", personPtr->height);

    free(personPtr);
    personPtr = NULL; 

    return 0; 
}