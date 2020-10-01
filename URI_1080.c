#include<stdio.h>

int main() {
    int nEntrada = 0;
    int MaiorValor = 0;
    int k =0;
    int posicaok = 0;

    for (k=1; k<=5;k++){
        scanf("%d",&nEntrada);
        if (nEntrada > MaiorValor) {
            MaiorValor = nEntrada;
            posicaok = k;
        }
    }
    printf("%d\n", MaiorValor);
    printf("%d\n",posicaok);

    return 0;
}