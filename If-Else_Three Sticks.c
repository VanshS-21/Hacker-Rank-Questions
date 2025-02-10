#include <stdio.h>

int main() {
    int len1, len2, len3;
    scanf("%d %d %d", &len1, &len2, &len3);
    if(len1 + len2 <= len3 || len2 + len3 <= len1 || len3 + len1 <= len2){
        printf("Lengths: [%d, %d, %d]\n", len1, len2, len3);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    else if(len1 == len2 && len2 == len3){
        printf("Lengths: [%d, %d, %d]\n", len1, len2, len3);
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.");
    }
    else if((len1 == len2 && len2 != len3) || (len2 == len3 && len2 != len1) || (len1 == len3 && len3 != len2)){
        printf("Lengths: [%d, %d, %d]\n", len1, len2, len3);
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.");
    }
    else{
        printf("Lengths: [%d, %d, %d]\n", len1, len2, len3);
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.");        
    }
    return 0;
}
