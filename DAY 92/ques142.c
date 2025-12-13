#include <stdio.h>
#include <string.h> 
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];


    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
    int highest_marks_index = 0; 

    for (int i = 1; i < num_students; i++) {
        if (students[i].marks > students[highest_marks_index].marks) {
            highest_marks_index = i;
        }
    }
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[highest_marks_index].name);
    printf("Roll Number: %d\n", students[highest_marks_index].roll_number);
    printf("Marks: %.2f\n", students[highest_marks_index].marks);

    return 0;
}