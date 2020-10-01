#include<stdio.h>

int main() {
    int senha = 2002;
    int nEntrada = 0;

    scanf("%d", &nEntrada);
    if (nEntrada == senha){
        printf("Acesso Permitido\n");
    }else{
        printf("Senha Invalida\n");
        
        while (nEntrada != senha){
            scanf("%d", &nEntrada);
            if (nEntrada != senha){
                printf("Senha Invalida\n");
            }
    }
        printf("Acesso Permitido\n");
    }
    return 0;
}