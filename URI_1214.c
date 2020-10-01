#include<stdio.h>
int main() {
    int C =0;
    int i = 0;
    int Nota = 0;
    int somaNotas =0;
    double media = 0;
    int acimaMedia = 0;
    int nCasos = 0;
    int k=0;

    scanf("%d",&C);

    for (i=0;i<C;i++) {
        scanf("%d", &nCasos);
        for (k=0;k<nCasos;k++){
            scanf("%d ",&Nota);
            somaNotas = somaNotas + Nota;
            media = somaNotas/i;
            if (Nota > media) {
                acimaMedia = acimaMedia +1;
            }
        }
    printf("%.3lf\n",acimaMedia/C);
    } 

}