#include <stdio.h>

int main() {
    int first_choice, second_choice, third_choice, final_choice;

    scanf("%d", &first_choice);
    scanf("%d", &second_choice);
    scanf("%d", &third_choice);
    scanf("%d", &final_choice);

    if (first_choice == 1) {
        printf("Player chooses the Left path.\n");
        if (second_choice == 1) {
            printf("Poor choice, Game Over!\n");
            return 0;
        } else {
            if (second_choice == 2) {
                printf("Player found a bridge.\n");
            }
            if (third_choice == 1) {
                printf("Player crosses the bridge safely.\n");
            } else {
                printf("Poor luck, Game Over!\n");
                return 0;
            }
        }
    } else if (first_choice == 2) {
        printf("Player chooses the Middle path.\n");
        if (second_choice == 582) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    } else if (first_choice == 3) {
        printf("Player chooses the Right path.\n");
        if (second_choice == 30) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }

    if (first_choice == 1 && second_choice == 2 && third_choice == 1) {
        if (final_choice == 1) {
            printf("All that glitters is not gold, Game Over!\n");
        } else if (final_choice == 2) {
            printf("All your efforts were for nothing, Game Over!\n");
        } else if (final_choice == 3) {
            printf("Congratulations!! You won the treasure.\n");
        } else {
            return 0;
        }
    } else {
        if (third_choice == 1) {
            printf("All that glitters is not gold, Game Over!\n");
        } else if (third_choice == 2) {
            printf("All your efforts were for nothing, Game Over!\n");
        } else if (third_choice == 3) {
            printf("Congratulations!! You won the treasure.\n");
        } else {
            return 0;
        }
    }

    return 0;
}
