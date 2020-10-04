#include<stdio.h>

int main() {
    int vetorDeDados[5];
    int ValorInserido = 0;
    int nPares = 0;
    int nImpares = 0;
    int nPositivos = 0;
    int nNegativos = 0;
    int k = 0;

    for (k=0;k<5;k++){
        scanf("%d",&vetorDeDados[k]);
    }

    for (k=0;k<5;k++){
        if (vetorDeDados[k] % 2 == 0 ){
            nPares = nPares +1;
        }else if(vetorDeDados[k] % 2 != 0 ){
            nImpares = nImpares + 1;
        }
        
        if(vetorDeDados[k] > 0){
            nPositivos = nPositivos +1;
        }else if(vetorDeDados[k]< 0){
            nNegativos = nNegativos +1;
        }
    }
    
    printf("%d valor(es) par(es)\n",nPares);
    printf("%d valor(es) impar(es)\n",nImpares);
    printf("%d valor(es) positivo(s)\n",nPositivos);
    printf("%d valor(es) negativo(s)\n",nNegativos);
    



    return 0; 
}