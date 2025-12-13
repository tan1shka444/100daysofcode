#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[50];
    int age;
    float height;
} Person;


int arePersonsIdentical(Person p1, Person p2) {

    if (strcmp(p1.name, p2.name) != 0) {
        return 0; 
    }
   
    if (p1.age != p2.age) {
        return 0; 
    }
    
    if (p1.height != p2.height) {
        return 0; 
    }
    return 1; 
}

int main() {
    
    Person person1, person2;

    printf("Enter details for Person 1:\n");
    printf("Name: ");
    scanf("%49s", person1.name); 
    printf("Age: ");
    scanf("%d", &person1.age);
    printf("Height: ");
    scanf("%f", &person1.height);

    printf("\nEnter details for Person 2:\n");
    printf("Name: ");
    scanf("%49s", person2.name);
    printf("Age: ");
    scanf("%d", &person2.age);
    printf("Height: ");
    scanf("%f", &person2.height);

    if (arePersonsIdentical(person1, person2)) {
        printf("\nThe two persons are identical.\n");
    } else {
        printf("\nThe two persons are NOT identical.\n");
    }

    return 0;
}