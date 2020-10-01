#include<stdio.h>

int main() {
    int nEntrada = 0;
    int k =1;
    scanf("%d",&nEntrada);
    for (k=1;k<=10000;k++) {
        if (k % nEntrada == 2){
            printf("%d\n",k);
        }
    }
return 0;
}