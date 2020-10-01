#include<stdio.h>

    int main () {

    double nota1 = 0;
    double nota2 = 0;
    int status1 = 0;
    int status2 = 0;
    int contador = 0;

    while (contador < 2){

        if (status1 == 0){        
            scanf("%lf", &nota1);
            if (!(nota1 >= 0 && nota1 <= 10)){
                printf("nota invalida\n");   
                status1 = 0;
            }else {
                status1 = 1;
                contador = contador + 1;
            }
        }

        if(status2==0){
            scanf("%lf", &nota2);
            if (!(nota2 >= 0 && nota2 <= 10)){
                printf("nota invalida\n");
                status2 = 0;
            }else {
                status2 = 1;
                contador = contador + 1;
            }
        }

        if (status1 == 1 && status2 ==1) {
            printf("media = %.2lf\n", (nota1 + nota2)/2);
        }
    }

return 0;
}