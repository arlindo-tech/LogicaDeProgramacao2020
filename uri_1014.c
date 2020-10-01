#include<stdio.h>

int main (void) {
    int x = 0 ;
    double y = 0 ;
    double result = 0;

scanf("%d\n", &x);
scanf("%lf", &y);

//printf("%d",x);
result = x/y;

printf("%.3lf km/l", result);

}