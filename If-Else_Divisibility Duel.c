#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if(X % Y ==0 && X % Z ==0){
        printf("X defeats all!");
    }
    else if(X % Y ==0){
        printf("Y triumphs over X!");
    }
    else if(X % Z ==0){
        printf("Z outsmarts X!");
    }
    else{
        printf("X remains undefeated!");
    }
    return 0;
}
