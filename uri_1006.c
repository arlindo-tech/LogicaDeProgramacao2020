#include<stdio.h>

int main() {

    double A =0;
    double B = 0;
    double C = 0;
    double MEDIA = 0;

    scanf("%lf\n", &A);
    scanf("%lf\n", &B);
    scanf("%lf\n", &C);

    MEDIA = (A * 0.2) + (B * 0.3) + (C*0.5);

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}