#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1) {
        printf("The verdict for the number %d is: INVALID", N);
    } else if (((N % 2 == 0) && (N > 10)) && ((N % 3 == 0) && (N > 15)) && (N % 7 == 0)) {
        printf("The verdict for the number %d is: SUPERNATURAL", N);
    } else if ((((N % 2 == 0) && (N > 10)) && ((N % 3 == 0) && (N > 15))) ||
               (((N % 3 == 0) && (N > 15)) && (N % 7 == 0)) ||
               ((N % 7 == 0) && ((N % 2 == 0) && (N > 10)))) {
        printf("The verdict for the number %d is: MIRACULOUS", N);
    } else if (((N % 2 == 0) && (N > 10)) || 
               ((N % 3 == 0) && (N > 15)) || 
               (N % 7 == 0)) {
        printf("The verdict for the number %d is: MAGICAL", N);
    } else {
        printf("The verdict for the number %d is: NORMAL", N);
    }

    return 0;
}
