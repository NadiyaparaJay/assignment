#include <stdio.h>

int convertYearsToDays(int years) {
    return years * 365; // Assuming non-leap years for simplicity
}

int convertDaysToYears(int days) {
    return days / 365; // Assuming non-leap years for simplicity
}

int main() {
    int choice, value;

    printf("Choose an option:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the number of years: ");
            scanf("%d", &value);
            printf("%d years is approximately %d days.\n", value, convertYearsToDays(value));
            break;
        case 2:
            printf("Enter the number of days: ");
            scanf("%d", &value);
            printf("%d days is approximately %d years.\n", value, convertDaysToYears(value));
            break;
        default:
            printf("Invalid option. Please choose either 1 or 2.\n");
    }

    return 0;
}
