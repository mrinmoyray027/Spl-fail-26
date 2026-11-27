#include <stdio.h>

int main() {
    int x, n;
    printf("1st Player input =");
    scanf("%d", &x);
    for (int i = 1; i <= 3; i++) {
        printf("2nd Player input[%d] =", i);
        scanf("%d", &n);
        if (i == 3 && n != x) {
            printf("Wrong, 0 Chance(s) Left!\nGame over ");
        }
        if (n != x) {
            printf("Wrong, %d Chance(s) Left!\n", 3 - 1);
        } else {
            printf("Right, Player-2 wins!");
            break;
        }
    }

    return 0;
}