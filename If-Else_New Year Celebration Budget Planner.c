#include <stdio.h>

int main() {
    int budget, nog, fcpg, dc, mc, ee;
    scanf("%d", &budget);
    scanf("%d", &nog);
    scanf("%d", &fcpg);
    scanf("%d", &dc);
    scanf("%d", &mc);
    scanf("%d", &ee);
    if(nog < 6 || nog > 50){
        printf("Celebration Denied");
    }
    else if(nog > 25 && mc <= 0){
        printf("Celebration Denied");        
    }
    else if(((fcpg*nog) + mc + ee + dc) > budget){
        printf("Celebration Denied");
    }
    else if((dc >= 0.3 * budget) && ((fcpg * nog) >= 0.5 * budget)){
        printf("Celebration Denied");
    }
    else{
        printf("Celebration Approved");
    }
    return 0;
}
