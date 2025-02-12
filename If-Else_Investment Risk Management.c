#include <stdio.h>
int main() {
    int age, inc, rt;
    scanf("%d", &age);
    scanf("%d", &inc);
    scanf("%d", &rt);

    if ((age < 30) || 
        (age >= 30 && age <= 50 && inc > 75000 && rt == 3) || 
        (age > 50 && inc > 75000 && rt == 3)) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    } else if ((age >= 30 && age <= 50 && inc <= 75000 && rt == 2) || 
               (age >= 30 && age <= 50 && inc > 75000 && (rt == 2 || rt == 1))) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    } else if ((age > 50 && rt <= 2) || 
               (inc <= 30000 && rt <= 2)) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    } else {
        return 0;
    }
    return 0;
}
