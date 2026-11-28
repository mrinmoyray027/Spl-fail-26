#include <stdio.h>

int main() {
    int a, b;
    printf("A=");
    scanf("%d", &a);
    printf("B=");
    scanf("%d", &b);
    for (int i = 1;; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("LCM=%d", i);
            break;
        }
    }

    return 0;
}