#include<stdio.h>

int main(){
    int ValorEntrada = 0;
    double SomaIdades = 0;
    double MediaIdades = 0;
    int Npessoas = 0;

    while (ValorEntrada >= 0) {
        scanf("%d", &ValorEntrada);
        if (ValorEntrada >= 0){
        SomaIdades = SomaIdades + ValorEntrada;    
        Npessoas = Npessoas + 1;
        }
    }

    printf("%.2lf\n", SomaIdades/Npessoas);

return 0;
}