#include<stdio.h>

int main() {
    double valorEntrada = 0;

    scanf("%lf", &valorEntrada);

    if (0 <= valorEntrada && valorEntrada <=25) {
        printf("Intervalo [0,25]\n");
    }else if(25 < valorEntrada && valorEntrada <= 50){
        printf("Intervalo (25,50]\n");
    }else if(50 < valorEntrada && valorEntrada <= 75){
        printf("Intervalo (50,75]\n");
    }else if (75 < valorEntrada && valorEntrada <= 100){
        printf("Intervalo (75,100]\n");
    }else {
        printf("Fora de Intervalo\n");
    }
return 0;
}