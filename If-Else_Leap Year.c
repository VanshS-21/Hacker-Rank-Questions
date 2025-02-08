#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if (year >= 100 && year % 4 == 0 && year % 400 == 0) {
        printf("Yes, %d is a leap year.\n", year);
    } 
    else if (year > 0 && year % 4 == 0 && year % 100 != 0) {
        printf("Yes, %d is a leap year.\n", year);
    } 
    else if (year > 0 && year % 100 == 0 && year % 400 != 0) {
        printf("No, %d is not a leap year.\n", year);
    } 
    else if (year > 0 && year % 4 != 0) {
        printf("No, %d is not a leap year.\n", year);
    } 
    else {
        printf("The given year %d is an invalid year.\n", year);
    }

    return 0;
}
