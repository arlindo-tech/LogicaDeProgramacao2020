#include<stdio.h>

int main() {
    char nome[20];
    double salarioFixo = 0;
    double valorVendas = 0;
    double total = 0;

    scanf("%s",nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf",&valorVendas);

    total = salarioFixo + (0.15 * valorVendas);

    printf("TOTAL = R$ %.2lf\n",total);
    
    return 0;
}