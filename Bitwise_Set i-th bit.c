#include <stdio.h>

int main() {
    int n, i;
    scanf("%d\n", &n);
    scanf("%d\n", &i);
    printf("%d", (n | (1 << i)) );
    return 0;
}
