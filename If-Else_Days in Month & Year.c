#include <stdio.h>
#include <string.h>

int main() {
    int y, m;
    scanf("%d", &m);
    scanf("%d", &y);
    if((m < 1 || m>12) || (m < 1 && y >0) ){
        printf("Invalid Month\n");
    }
    if((y< 1 || y > 1000000) || (y < 1 && m >0)){
        printf("Invalid Year");
    }
    if(m==1 && y > 0){
        printf("31");
    }
    else if(m==3 && y > 0){
        printf("31");
    }
    else if(m==4 && y > 0){
        printf("30");
    }
    else if(m==5 && y > 0){
        printf("31");
    }
    else if(m==6 && y > 0){
        printf("30");
    }
    else if(m==7 && y > 0){
        printf("31");
    }
    else if(m==8 && y > 0){
        printf("31");
    }
    else if(m==9 && y > 0){
        printf("30");
    }
    else if(m==10 && y > 0){
        printf("31");
    }
    else if(m==11 && y > 0){
        printf("30");
    }
    else if(m==12 && y > 0){
        printf("31");
    }
    else if(m == 2 && y > 0 && y % 100 ==0){
        if(y % 400 == 0){
            printf("29");
        }
        else{
            printf("28");
        }
    }
    else if(m == 2 && y > 0){
        if(y % 4 ==0){
            printf("29");
        }
        else{
            printf("28");
        }
    }
    else{
        return 0;
    }
    return 0;
}
