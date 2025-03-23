#include <stdio.h>

int main() {
    int n, sign;
    scanf("%d", &n);
    sign = (n >> 31);
    switch(sign){
        case 0: printf("Positive");
            break;
        default: printf("Negative");
            break;
    }
    return 0;
}
