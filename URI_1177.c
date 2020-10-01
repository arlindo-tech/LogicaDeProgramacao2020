#include<stdio.h>
int main () {
    int nEntrada = 0;
    int vetorN[1000];
    int k=0;
    int i = 0;

    scanf("%d", &nEntrada);

    for (k=0; k < nEntrada; k++ ) {
        for (i=0; i < nEntrada; i++) {
            vetorN[i]= nEntrada + 1;
            printf("N[%d] = %d\n", vetorN[i], vetorN[i]);
        }
    } 
    
}