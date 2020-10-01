#include<stdio.h>
int main() {
    int codigoPecaA = 0;
    int nPecaA = 0;
    double precoPecaA = 0;
    int codigoPecaB = 0;
    int nPecaB = 0;
    double precoPecaB = 0;

    scanf("%d %d %lf\n",&codigoPecaA,&nPecaA,&precoPecaA);
    scanf("%d %d %lf",&codigoPecaB,&nPecaB,&precoPecaB);

    printf("VALOR A PAGAR: R$ %.2lf\n", ((nPecaA * precoPecaA) + (nPecaB * precoPecaB)));

    return 0;
}