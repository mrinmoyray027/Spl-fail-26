#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("N=");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum = sum + i * i * (i + 1);
    }

    printf("Result: %d", sum);

    return 0;
}