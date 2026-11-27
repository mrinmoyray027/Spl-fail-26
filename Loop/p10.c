#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("N=");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }

    printf("Result: %d", sum);

    return 0;
}