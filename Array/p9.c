#include <stdio.h>

int main() {
    int n, co = 0;
    char aip[100];
    printf("Enter N= ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("ALP=");
        scanf(" %c", &aip[i]);
    }
    for (int i = 0; i < n; i++) {
        if (aip[i] == 'a' || aip[i] == 'e' || aip[i] == 'i' || aip[i] == 'o' ||
            aip[i] == 'u') {
            co++;
        }
    }
    printf("COUNT=%d", co);
    return 0;
}