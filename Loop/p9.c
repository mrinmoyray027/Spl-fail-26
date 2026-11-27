#include <stdio.h>

int main() {
    int N, i;
    float A, HW, CT, MT, TF, total;
    printf("Total Students Numbers = ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Student %d\n", i);

        printf("Enter Attendance marks on 5 : ");
        scanf("%f", &A);

        printf("Enter Assignment marks on 10 : ");
        scanf("%f", &HW);

        printf("Enter Class Test marks on 15 : ");
        scanf("%f", &CT);

        printf("Enter Midterm marks on 50 : ");
        scanf("%f", &MT);

        printf("Enter Term Final marks on 100 : ");
        scanf("%f", &TF);

        MT = MT * 30 / 50;
        TF = TF * 40 / 100;

        total = A + HW + CT + MT + TF;

        printf("Student %d : ", i);

        if (total >= 90)
            printf("A\n");
        else if (total >= 86)
            printf("A-\n");
        else if (total >= 82)
            printf("B+\n");
        else if (total >= 78)
            printf("B\n");
        else if (total >= 74)
            printf("B-\n");
        else if (total >= 70)
            printf("C+\n");
        else if (total >= 66)
            printf("C\n");
        else if (total >= 62)
            printf("C-\n");
        else if (total >= 58)
            printf("D+\n");
        else if (total >= 55)
            printf("D\n");
        else
            printf("F\n");
    }

    return 0;
}