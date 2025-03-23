#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a - b;
    c >>= 31;
    if((c & 1) != 0){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }
    
    return 0;
}
