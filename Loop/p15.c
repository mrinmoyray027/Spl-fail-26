#include <stdio.h>

int main() {
    int x, y, i;
    int result = 1;

    scanf("%d %d", &x, &y);

    for (i = 1; i <= y; i++) {
        result = result * x;
    }

    printf("%d", result);

    return 0;
}