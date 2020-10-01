#include<stdio.h>

int main() {
    int NumeroEntradas = 0;
    int valorEntrada = 0;
    int k = 0;
    int contador = 0;

    scanf("%d",&NumeroEntradas);

    for (k=0; k < NumeroEntradas; k++) {
        scanf("%d", &valorEntrada);
        if (valorEntrada >= 10 && valorEntrada <= 20) {
            contador = contador + 1;
        }
    }

    printf("%d in\n", contador);
    printf("%d out\n", NumeroEntradas - contador);


    return 0;
}
