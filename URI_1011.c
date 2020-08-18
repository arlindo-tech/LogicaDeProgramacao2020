#include<stdio.h>

int main (void) {
    float raio = 0;
    double pi = 3.141519;
    double volume = 0;

    scanf("%f", &raio);
    volume = (4.0/3)*pi*(raio*raio*raio);

    printf("VOLUME = %.3lf\n",volume);
return 0;
}