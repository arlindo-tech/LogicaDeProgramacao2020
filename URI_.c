#include <stdio.h>
 
int main() {
 
    double salarioBruto = 0;
    double valorImposto = 0;

    scanf("%lf", &salarioBruto);

   
    //printf("Salario bruto = %lf\n",salarioBruto);
    
    if (salarioBruto > 2000) {
        if((2001.01 <= salarioBruto) && ( salarioBruto <= 3000.00)){
            
            valorImposto = 0.08 * (salarioBruto - 2000);
        }
        
        if ((3000.01 <= salarioBruto) &&   (salarioBruto <= 4500.00)){
            
            valorImposto =(0.08 * 1000) + (0.18 * (salarioBruto - 3000));
        }
        
        if (salarioBruto > 4500.00){
        
        valorImposto = (0.0 * 2000) + (0.08 * 1000) +(0.18 * 1500) + (0.28 * (salarioBruto - 4500));
        }
    printf("R$ %.2f\n", valorImposto);
    }
    

    if (salarioBruto <= 2000.00) {
        printf("Isento\n");
    } 
    return 0;
}