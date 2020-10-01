#include<stdio.h>

int main() {

    int Ntestes = 0;
    double Valor1 = 0;
    double Valor2 = 0;
    double Valor3 = 0;
    double MediaPonderada = 0;
    int i = 0;

    scanf("%d", &Ntestes);
    
    for (i=0; i <Ntestes ; i++){
        scanf("%lf %lf %lf", &Valor1 , &Valor2 , &Valor3 );

        MediaPonderada = ((Valor1 * 2) + (Valor2 * 3) + (Valor3 * 5))/10;
        printf("%.1lf\n", MediaPonderada);

    }
    return 0;
}