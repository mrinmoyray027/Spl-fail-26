#include <stdio.h>

int main() {
    int n, r;
    int r1 = 1, n1 = 1, p2 = 1;
    printf("Enter the value of N=");
    scanf("%d", &n);
    printf("Enter the value of R=");
    scanf("%d", &r);
    int p1 = n - r;
    for (int i = 1; i <= n; i++) {
        n1 = n1 * i;
    }

    for (int i = 1; i <= r; i++) {
        r1 = r1 * i;
    }

    for (int i = 1; i <= p1; i++) {
        p2 = p2 * i;
    }
    int ans = (n1) / (r1 * p2);
    printf("%d", ans);
    return 0;
}