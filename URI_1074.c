#include<stdio.h>

int main() {

    int qtdadeNumeros = 0;
    int k= 0;
    int valorEntrada = 0;

    scanf("%d",&qtdadeNumeros);

    for (k=0; k< qtdadeNumeros; k++) {
        scanf("%d",&valorEntrada);
        if (valorEntrada%2 == 0 && valorEntrada < 0){
            printf("EVEN NEGATIVE\n");
        }

        if (valorEntrada%2 == 0 && valorEntrada > 0){
            printf("EVEN POSITIVE\n");
        }

        if (valorEntrada%2 != 0 && valorEntrada < 0){
            printf("ODD NEGATIVE\n");
        }

        if (valorEntrada%2 != 0 && valorEntrada > 0){
            printf("ODD POSITIVE\n");
        }

        if (valorEntrada == 0){
            printf("NULL\n");
        }
        
            
        
        
    }
}