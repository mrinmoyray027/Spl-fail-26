#include <stdio.h>

int main() {
    int x, n, co = 0;
    printf("1st Player input =");
    scanf("%d", &x);

    printf("2nd Player input=");
    scanf("%d", &n);

    if (n == x) {
        printf("Right, Player-2 wins!\n");
        co = 1;
    } else
        printf("Wrong, 2 Chance(s) Left!\n");

    if (co == 0) {
        scanf("%d", &n);

        if (n == x) {
            printf("Right, Player-2 wins!\n");
            co = 1;
        } else
            printf("Wrong, 1 Chance(s) Left!\n");
    }

    if (co == 0) {
        scanf("%d", &n);

        if (n == x) {
            printf("Right, Player-2 wins!\n");
            co = 1;
        } else
            printf("Wrong, 0 Chance(s) Left!\n");
    }

    if (co == 0)
        printf("Player-1 wins!\n");

    return 0;
}
