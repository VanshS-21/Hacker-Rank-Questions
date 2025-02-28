#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    ((n & (n-1)) == 0 && (n != 0))?printf("1"):printf("-1");    
    
    return 0;
}
