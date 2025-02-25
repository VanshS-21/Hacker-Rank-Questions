#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    unsigned int x = n < 0 ? -n : n;


    if ((x != 0 ) && (x & (x + 1) ) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
