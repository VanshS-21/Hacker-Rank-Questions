#include <stdio.h>

int main() {
    float units, bill;

    scanf("%f", &units);

    if (units < 0 || units > 1000000) {
        printf("Invalid Input!\n");
    } 
    else if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 300) {
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else {
        bill = (100 * 5) + (200 * 7) + ((units - 300) * 10);
    }

    if (units >= 0 && units <= 1000000) {
        if (bill <= 1200) {
            bill *= 0.9;
        }
        printf("The electricity bill is: %.2f.\n", bill);
    }

    return 0;
}
