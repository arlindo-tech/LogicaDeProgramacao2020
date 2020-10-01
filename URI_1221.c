#include<stdio.h>

int main() {
    int Ntestes = 0;
    int NumeroTestado = 0;
    int i =0;
    int k =0;
    int resposta = 0;

    scanf("%d", &Ntestes);
    
    for (i=0; i <Ntestes; i++){
        resposta = 0;
        scanf("%d", &NumeroTestado);
        for (k = 2 ; k < 11 ; k++){
            if ((NumeroTestado % k) == 0 && NumeroTestado != k) {
                resposta = resposta + 1 ;
            } 
        }
        if (resposta != 0) {
            printf("Not Prime\n");
        }else{
            printf("Prime\n");
        }
    }
    return 0;
}