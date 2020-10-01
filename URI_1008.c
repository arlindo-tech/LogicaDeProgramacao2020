#include<stdio.h>

int main() {
    int Nfuncionario = 0;
    int qtdadeHoras = 0;
    double salarioHora = 0;
    double salarioTotal = 0;

    scanf("%d", &Nfuncionario);
    scanf("%d", &qtdadeHoras);
    scanf("%lf", &salarioHora);

    salarioTotal = qtdadeHoras * salarioHora ; 

    printf("NUMBER = %d\n", Nfuncionario);
    printf("SALARY = U$ %.2lf\n", salarioTotal);


    return 0;
}