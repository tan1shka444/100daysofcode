#include <stdio.h>
#include <string.h> 

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int employee_id;
    char name[50];
    struct Date joining_date; 
    float salary;
};

int main() {
    struct Employee emp1;

    printf("Enter Employee ID: ");
    scanf("%d", &emp1.employee_id);

    printf("Enter Employee Name: ");
    scanf("%s", emp1.name); 

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp1.joining_date.day, &emp1.joining_date.month, &emp1.joining_date.year);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp1.salary);


    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp1.employee_id);
    printf("Name: %s\n", emp1.name);
    printf("Joining Date: %02d/%02d/%d\n", emp1.joining_date.day, emp1.joining_date.month, emp1.joining_date.year);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}