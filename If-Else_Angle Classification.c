#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int X;
    scanf("%u", &X);
    
    if (X == 0) {
        printf("Acute Angle");
    } else {
        X = X % 360;

        if (X > 0 && X < 90) {
            printf("Acute Angle");
        }
        else if (X == 90) {
            printf("Right Angle");
        }
        else if (X > 90 && X < 180) {
            printf("Obtuse Angle");
        }
        else if (X == 180) {
            printf("Straight Angle");
        }
        else if (X > 180 && X < 360) {
            printf("Reflex Angle");
        }
        else if (X == 0) {
            printf("Full Rotation");
        }
    }

    return 0;
}
