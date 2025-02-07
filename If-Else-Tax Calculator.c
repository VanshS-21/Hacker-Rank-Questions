#include <stdio.h>

int main() {
    float inc;
    
    scanf("%f", &inc);

    if (inc >= 0 && inc <= 250000) {
        printf("0.00");
    } 
    else if (inc > 250000 && inc <= 500000) {
        printf("%.2f", (inc - 250000) / 20);
    } 
    else if (inc > 500000 && inc <= 1000000) {
        printf("%.2f", (250000 / 20) + ((inc - 500000) / 5));
    } 
    else if (inc > 1000000) {
        printf("%.2f", (250000 / 20) + (500000 / 5) + ((inc - 1000000) * 30 / 100));
    } 
    else {
        printf("INVALID");
    }

    return 0;
}
