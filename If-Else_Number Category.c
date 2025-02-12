#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N % 2 == 0 && N % 3 ==0 && N % 5 != 0){
        printf("A");
    }
    else if(N > 20 && (N ==6 || N ==10 || N ==14 || N ==22 || N ==15 || N ==21 || N ==33)){
        printf("B");
    }
    else if((N >= 10) && (N <= 99) && (N % 3 ==0 || N % 7 ==0) && !(N % 3 ==0 && N % 7 ==0)){
            printf("C");
    }
    else if(N < 200 && (N == 1 || N ==4 || N ==9 || N ==16 || N ==25 || N ==36 || N ==49 || N ==64 || N ==81 || N ==100 || N ==121 || N ==144 || N ==169 || N ==196)){
        printf("D");
    }
    else{
        printf("E");
    }
    return 0;
}
