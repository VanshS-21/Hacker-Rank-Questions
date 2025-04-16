#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int a_sign = a >> 31;
    int b_sign = b >> 31;

    if (a_sign != b_sign) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
