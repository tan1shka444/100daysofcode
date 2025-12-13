#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Assigning values
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    scanf("%d", (int *)&p.gender);

    // Printing details
    printf("\nName: %s\n", p.name);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}
