#include<stdio.h>

int main() {
    int vetorX[10];
    int k=0;

    for (k=0;k<10;k++){
        scanf("%d",&vetorX[k]);
        if(vetorX[k] <= 0){
            vetorX[k] = 1;
        }
        printf("X[%d] = %d\n",k,vetorX[k]);
    }


    return 0;
}