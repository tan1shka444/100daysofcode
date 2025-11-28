#include <stdio.h>

int main() {
    char date[15];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
    } else {
        printf("Converted date: %02d-%s-%d\n", day, months[month - 1], year);
    }

    return 0;
}
