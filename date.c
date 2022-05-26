#include <stdio.h>

int main(void)
{
    int month, day, year;

    // Standard date form
    printf("Enter date (mm/dd/yyyy): ");
    // Split the user input into 3 variables for the date
    // Don't worry about the `scanf()` below, you'll learn more about these later!
    scanf("%d /%d /%d", &month, &day, &year);

    // Print the month
    switch (month)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        printf("Invalid month!\n");
    }

    // Print the day

    // Print the suffix for a given day

    // Print the year

    return 0;
}