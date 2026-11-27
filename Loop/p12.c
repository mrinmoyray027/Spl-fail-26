#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("N=");
    scanf("%d", &n);

    printf("%d! = ", n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i);

        fact = fact * i;

        if (i < n)
            printf(" X ");
    }

    printf(" = %d", fact);

    return 0;
}