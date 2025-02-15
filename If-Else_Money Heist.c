#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, index1, index2, index3, r1, r2, r3;
    scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
    scanf("%d %d", &index1, &r1);
    scanf("%d %d", &index2, &r2);
    scanf("%d %d", &index3, &r3);
    if (num1 >= 0 && num1 <= 9 &&
    num2 >= 0 && num2 <= 9 &&
    num3 >= 0 && num3 <= 9 &&
    num4 >= 0 && num4 <= 9 &&
    num5 >= 0 && num5 <= 9 &&
    num6 >= 0 && num6 <= 9 &&
    num7 >= 0 && num7 <= 9 &&
    num8 >= 0 && num8 <= 9 &&
    num9 >= 0 && num9 <= 9 &&
    num10 >= 0 && num10 <= 9){
        switch(index1){
            case 0: num1 = (num1 + r1) % 10 ; break;
            case 1: num2 = (num2 + r1) % 10 ; break;
            case 2: num3 = (num3 + r1) % 10 ; break;
            case 3: num4 = (num4 + r1) % 10 ; break;
            case 4: num5 = (num5 + r1) % 10 ; break;
            case 5: num6 = (num6 + r1) % 10 ; break;
            case 6: num7 = (num7 + r1) % 10 ; break;
            case 7: num8 = (num8 + r1) % 10 ; break;
            case 8: num9 = (num9 + r1) % 10 ; break;
            default: num10 = (num10 + r1) % 10 ; break;
        }
        switch(index2){
            case 0: num1 = (num1 + r2) % 10 ; break;
            case 1: num2 = (num2 + r2) % 10 ; break;
            case 2: num3 = (num3 + r2) % 10 ; break;
            case 3: num4 = (num4 + r2) % 10 ; break;
            case 4: num5 = (num5 + r2) % 10 ; break;
            case 5: num6 = (num6 + r2) % 10 ; break;
            case 6: num7 = (num7 + r2) % 10 ; break;
            case 7: num8 = (num8 + r2) % 10 ; break;
            case 8: num9 = (num9 + r2) % 10 ; break;
            default: num10 = (num10 + r2) % 10 ; break;
        }
        switch(index3){
            case 0: num1 = (num1 + r3) % 10 ; break;
            case 1: num2 = (num2 + r3) % 10 ; break;
            case 2: num3 = (num3 + r3) % 10 ; break;
            case 3: num4 = (num4 + r3) % 10 ; break;
            case 4: num5 = (num5 + r3) % 10 ; break;
            case 5: num6 = (num6 + r3) % 10 ; break;
            case 6: num7 = (num7 + r3) % 10 ; break;
            case 7: num8 = (num8 + r3) % 10 ; break;
            case 8: num9 = (num9 + r3) % 10 ; break;
            default: num10 = (num10 + r3) % 10 ; break;
        }
    }
    else{
        return 0;
    }
    printf("%d %d %d %d %d %d %d %d %d %d", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
    return 0;
}
