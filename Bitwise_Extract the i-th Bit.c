#include <stdio.h>

int main() {
    int n, i;
    scanf("%d %d", &n , &i);
    if( (n & ((1<<i))) != 0 ){
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}
