#include<stdio.h>

int main() {
    char tipoComb[4]={'Alcool','Gasolina','Diesel','Fim'};
    int codigoEntrada = 0;

    scanf("%d",&codigoEntrada);
    if (codigoEntrada < 1 || codigoEntrada > 4){
        scanf("%d",&codigoEntrada);
    }else{
        printf("MUITO OBRIGADO\n");
        printf("%s : %d",tipoComb[codigoEntrada-1],codigoEntrada);
    }

    return 0;
}