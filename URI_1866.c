#include<stdio.h>


int main() {
    int qtdadeTeste = 0;
    int k=0;
    int nEntrada = 0;

    scanf("%d", &qtdadeTeste);

    for (k=0; k <qtdadeTeste;k++){
        scanf("%d", &nEntrada);
        if (nEntrada % 2 ==0 ){
            printf("%d",0);
        }else{
        printf("%d",1);
        }
    
    }
    
    
    
    return 0;
}