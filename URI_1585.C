#include <stdio.h>
 
int main() {
 
    int qtdadePipas = 0;
    int bambu1 = 0;
    int bambu2 = 0;

    int k=0;
    
    scanf("%d", &qtdadePipas);
    
    for (k=0; k < qtdadePipas ; k++) {
     
         scanf("%d %d", &bambu1,&bambu2);
        printf("%d cm2\n", (bambu1 * bambu2)/2);
    }
    
 
    return 0;
}