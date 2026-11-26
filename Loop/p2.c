#include <stdio.h>
int main() {
    int n;
    printf("N=");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n; i++) {
        if (i % 2 != 0) {
            printf("%d", i);
            if (i < 2 * n-1 ) {
                printf(", ");
            }
        }
    }

    return 0;
}