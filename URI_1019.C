#include <stdio.h>
 
int main() {
    int entradaDados = 0;
    int horas =0;
    int minutos = 0;
    int segundos = 0;
    
    scanf("%d",&entradaDados);
    horas = entradaDados/3600 ;
    minutos = (entradaDados % 3600) / 60 ;
    //segundos = ((entradaDados % 3600) % 60)/60;
    segundos = entradaDados - (horas *3600) - (minutos * 60);
    
    printf("%d : %d : %d\n",horas,minutos,segundos);
 
 
    return 0;
}