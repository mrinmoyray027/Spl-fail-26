
#include <stdio.h>

int main() {
    int n, temp, digit, reverse = 0;

    scanf("%d", &n);

    temp = n;

    for (; n > 0; n = n / 10) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    if (temp == reverse) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
