#include<stdio.h>

int main() {

    
    int k =0;
    double valorEntrada = 0;
    int Npositivos = 0;
   

    for (k=0;k<6;k++) {
        scanf("%lf", &valorEntrada);
        
        if (valorEntrada > 0) {
          Npositivos = Npositivos + 1;      
        }
    }

    printf("%d valores positivos\n",Npositivos);


    


    return 0;
}