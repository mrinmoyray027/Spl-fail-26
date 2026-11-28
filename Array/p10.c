#include <stdio.h>

int main() {
    int n;
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int num;

    int c = 0;
    printf("NUM=");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (num == a[i]) {
            printf("Found at %d\n", i);
            c++;
        }
    }
    if (c == 0)
        
    {
        printf("NOT");
    }

    return 0;
}