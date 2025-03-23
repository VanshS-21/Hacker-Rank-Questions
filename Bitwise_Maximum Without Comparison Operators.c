#include <stdio.h>

int main() {
    int a, b, maxN, sign;
    scanf("%d %d", &a, &b);
    maxN = a - b;
    sign = maxN>> 31;
    maxN = (~(sign)&a) | (((sign)&b));
    printf("%d", maxN);
    
    
    return 0;
}
