#include <stdio.h>

int main() {
    int n, side1, side2, side3, side4, angle1, angle2, angle3, angle4;
    scanf("%d", &n);

    if (n == 0) {
        printf("Circle");
        return 0;
    }

    if (n == 3) {
        scanf("%d %d %d", &side1, &side2, &side3);
        scanf("%d %d %d", &angle1, &angle2, &angle3);

        if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
            angle1 <= 0 || angle2 <= 0 || angle3 <= 0 ||
            angle1 + angle2 + angle3 != 180 ||
            (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2)) {
            printf("Invalid Figure");
            return 0;
        }

        if (side1 == side2 && side2 == side3 && angle1 == 60 && angle2 == 60 && angle3 == 60) {
            printf("Equilateral Triangle");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("Isosceles Triangle");
        } else {
            printf("Scalene Triangle");
        }

        return 0;
    }

    if (n == 4) {
        scanf("%d %d %d %d", &side1, &side2, &side3, &side4);
        scanf("%d %d %d %d", &angle1, &angle2, &angle3, &angle4);

        if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side4 <= 0 ||
            angle1 <= 0 || angle2 <= 0 || angle3 <= 0 || angle4 <= 0 ||
            angle1 + angle2 + angle3 + angle4 != 360) {
            printf("Invalid Figure");
            return 0;
        }

        int allSidesEqual = (side1 == side2 && side2 == side3 && side3 == side4);
        int allAngles90 = (angle1 == 90 && angle2 == 90 && angle3 == 90 && angle4 == 90);
        int oppositeSidesEqual = (side1 == side3 && side2 == side4);
        int oppositeAnglesEqual = (angle1 == angle3 && angle2 == angle4);

        if (allSidesEqual && allAngles90) {
            printf("Square");
        } else if (oppositeSidesEqual && allAngles90) {
            printf("Rectangle");
        } else if (allSidesEqual && !allAngles90 && oppositeAnglesEqual) {
            printf("Rhombus");
        } else if (oppositeSidesEqual && oppositeAnglesEqual) {
            printf("Parallelogram");
        } else {
            printf("Invalid Figure");
        }

        return 0;
    }

    printf("Invalid Figure");
    return 0;
}
