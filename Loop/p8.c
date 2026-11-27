#include <stdio.h>

int main() {
    int n, digit, reverse = 0;

    scanf("%d", &n);

    for (; n > 0; n = n / 10) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    printf("%d", reverse);

    return 0;
}