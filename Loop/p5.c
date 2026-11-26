
#include <stdio.h>
int main() {
    int x, y;
    printf("X=");
    scanf("%d", &x);
    printf("Y=");
    scanf("%d", &y);
    if (x > y) {
        for (int i = x; i > y; i--) {
            printf("%d,", i * i);
        }
        printf("Reached!");
    } else if (x < y) {
        for (int i = x; i < y; i++) {
            printf("%d,", i * i);
        }
        printf("Reached!");
    } else if (x == y) {
        printf("Reached!");
    }

    return 0;
}
