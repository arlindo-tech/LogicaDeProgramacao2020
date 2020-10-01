#include<stdio.h>

int main() {
    int N = 0;
    int k = 0;
    int nEntrada1 = 0;
    int nEntrada2 = 0;
    double resultado = 0;

    scanf("%d", &N);
    for (k = 0 ; k < N ; k++) {
        scanf("%d %d", &nEntrada1, &nEntrada2);
        if (nEntrada2 != 0){
            resultado = (double)nEntrada1/nEntrada2;
            printf("%.1lf",resultado);
        }else{
            printf("divisao impossivel");
        }
    }

    return 0;
}