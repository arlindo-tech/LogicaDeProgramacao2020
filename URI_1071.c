#include<stdio.h>

int main() {
    int tempoViagem = 0;
    int velocidadeMedia = 0;
    int distancia = 0;
    double consumo = 0;

    scanf("%d", &tempoViagem);
    scanf("%d",&velocidadeMedia);

    distancia = velocidadeMedia * tempoViagem;
    consumo = distancia/12.0;

    printf("%.3lf\n",consumo);

    return 0;
}