#include <stdio.h>
#include <string.h> 

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {

    struct Person person1 = {"Alice", 30, 5.7};

    struct Person *personPtr = &person1;

    printf("Original Data:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f\n", personPtr->height);

    strcpy(personPtr->name, "Bob"); 
    personPtr->age = 35;            
    personPtr->height = 6.1;         

    printf("\nModified Data:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f\n", personPtr->height);

    return 0;
}