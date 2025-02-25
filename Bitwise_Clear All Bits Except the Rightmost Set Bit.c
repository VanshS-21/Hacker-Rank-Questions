#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    while((n & 1) == 0){
       n = n>>1;
        count++;
    }
    printf("%d", 1<<count);    
    return 0;
}
