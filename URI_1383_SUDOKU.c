#include<stdio.h>

int main() {
    
    int nMatrizes9x9=0 ; //define o numero de instancias (matrizes 9x9)
    int ValorEntrada = 0;
    int k=0;
    int i =0;
    int n =0;
    int somaElementosLinha= 0;
    int somaElementosColuna= 0;
    int errosLinhas = 0;
    int errosColunas = 0;
    int somaMatriz3x3 = 0;
    int erro3x3 = 0;

        // ENTRADA DE DADOS ///
    printf("erro3x3 = %d\n\n\n",erro3x3);
    scanf("%d",&nMatrizes9x9);
    int matrizDeDados[9][9][nMatrizes9x9];
    for (k=0;k<nMatrizes9x9;k++){ //loop para cada matriz 9x9
        for (i=0;i<9;i++) { //loop das linhas
            for (n=0;n<9;n++){ //loop para cada coluna dentro da mesma linha
                scanf("%d", &ValorEntrada);

                matrizDeDados[i][n][k] = ValorEntrada;
            }
        
        }
       

    }

    

    k=0;
    i=0;
    n=0;
    printf("erro3x3= %d\n\n\n",erro3x3);
    for (k=0;k<nMatrizes9x9;k++){ //loop para cada matriz 9x9 (eixo z)
        errosLinhas = 0;
        errosColunas = 0;
        erro3x3 =0;
        
     //Checar se as linhas atendem as condiçoes
        for (i=0;i<9;i++) { //loop das linhas                  (eixo x)
            somaElementosLinha = 0;                             
            for (n=0;n<9;n++){ //loop para cada coluna dentro da mesma linha (eixo y)
                somaElementosLinha = somaElementosLinha + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k]));
                if (matrizDeDados[i][n][k] < 1 || matrizDeDados[i][n][k] > 9){
                    errosLinhas = errosLinhas +1;
                }
            }
            
            if ((somaElementosLinha != 285)) {
                errosLinhas = errosLinhas + 1;
            }
               
            printf("soma elementos linha %d = %d\n",i,somaElementosLinha);
            printf("erros linha = %d\n",errosLinhas);
        }
     //Checas se as colunas atendem as condiçoes
    printf("erro3x3 = %d\n\n\n",erro3x3);
        for (n=0;n<9;n++){ //loop para cada coluna 
            somaElementosColuna = 0;
            for (i=0;i<9;i++) { //loop das linhas na mesma coluna (eixo x)                             
                somaElementosColuna = somaElementosColuna + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k]));
                if (matrizDeDados[i][n][k] < 1 || matrizDeDados[i][n][k] > 9){
                    errosColunas = errosColunas + 1;
                }
            }
            
            if ((somaElementosColuna != 285) ) {
                errosColunas = errosColunas + 1;
            }
                
               
             printf("soma elementos coluna %d = %d\n",n,somaElementosColuna);
             printf("erros colunas = %d\n",errosColunas);
        }
        //checa matrizes 3*3
        erro3x3 = 0;
        //matriz3x3-1
        somaMatriz3x3 = 0;
        for (i=0;i<3;i++){
            for(n=0;n<3;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k]));
            } 
        }
            if (somaMatriz3x3 != 285 ) {
                erro3x3 = erro3x3 +1;
            }
        
        printf("Erros matriz 3x3- 1: %d ////// soma matriz 3x3-1 = %d\n", erro3x3,somaMatriz3x3);


         //matriz3x3-2
        somaMatriz3x3 = 0;
        for(i=0;i<3;i++){
            for(n=3;n<6;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        } 
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
        printf("Erros matriz 3x3- 2: %d ////// soma matriz 3x3-2 = %d\n", erro3x3,somaMatriz3x3);
         //matriz3x3-3
        somaMatriz3x3 = 0;
        for(i=0;i<3;i++){
            for(n=6;n<9;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        }
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
        printf("Erros matriz 3x3- 3: %d ////// soma matriz 3x3-3 = %d\n", erro3x3,somaMatriz3x3);
        //matriz3x3-4
        somaMatriz3x3 = 0;
        for(i=3;i<6;i++){
            for(n=0;n<3;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        }
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
        printf("Erros matriz 3x3- 4: %d ////// soma matriz 3x3-4 = %d\n", erro3x3,somaMatriz3x3);
        //matriz3x3-5
        somaMatriz3x3 = 0;
        for(i=3;i<6;i++){
            for(n=3;n<6;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        }
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
       printf("Erros matriz 3x3- 5: %d ////// soma matriz 3x3-5 = %d\n", erro3x3,somaMatriz3x3);
         //matriz3x3-6
        somaMatriz3x3 = 0;
        for(i=3;i<6;i++){
            for(n=6;n<9;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        }
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
        printf("Erros matriz 3x3- 6: %d ////// soma matriz 3x3-6 = %d\n", erro3x3,somaMatriz3x3);
         //matriz3x3-7
        somaMatriz3x3 = 0;
        for(i=6;i<9;i++){
            for(n=0;n<3;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        }
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
        printf("Erros matriz 3x3- 7: %d ////// soma matriz 3x3-7 = %d\n", erro3x3,somaMatriz3x3);
        //matriz3x3-8
        somaMatriz3x3 = 0;
        for(i=6;i<9;i++){
            for(n=3;n<6;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        }
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
        printf("Erros matriz 3x3- 8: %d ////// soma matriz 3x3-8 = %d\n", erro3x3,somaMatriz3x3);
        //matriz3x3-9
        somaMatriz3x3 = 0;
        for(i=6;i<9;i++){
            for(n=6;n<9;n++){
                somaMatriz3x3 = somaMatriz3x3 + ((matrizDeDados[i][n][k])*(matrizDeDados[i][n][k])); 
            }
        }
            if (somaMatriz3x3 != 285) {
                erro3x3 = erro3x3 +1;
            }
        printf("Erros matriz 3x3- 9: %d ////// soma matriz 3x3-9 = %d\n", erro3x3,somaMatriz3x3);
        printf("Instancia %d\n",k+1);
        if (errosLinhas == 0 && errosColunas == 0 && erro3x3 == 0) {
            printf("SIM\n");
            printf("\n");
        }else{
             printf("NAO\n");
            printf("\n");
        }

        errosLinhas = 0;
        errosColunas = 0;
        erro3x3 =0;
    }
    return 0;
}     
  
    

