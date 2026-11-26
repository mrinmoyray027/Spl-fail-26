#include <stdio.h>
int main() {

    int n;
    float num, sum = 0, avg = 1;
    printf("N=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d. Num=", i);
        scanf("%f", &num);
        sum = sum + num;
    }
    avg = sum / n;
    printf("AVG of %d inputs= %f", n, avg);

    return 0;
}