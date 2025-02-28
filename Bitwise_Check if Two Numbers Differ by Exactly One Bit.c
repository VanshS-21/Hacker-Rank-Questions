#include <stdio.h>

int main() {
    int a, b, x;
    scanf("%d %d", &a, &b);
    x = a ^ b;
    if((x & (x-1)) == 0 && (x > 0)){
        printf("Yes");
    }
       else{
           printf("No");
       }
    return 0;
}
