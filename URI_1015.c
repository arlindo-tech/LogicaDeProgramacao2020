#include<stdio.h>
#include<math.h>

int main() {
    float x1 = 0;
    float x2 = 0;
    float y1 = 0;
    float y2 = 0;
    float distancia = 0;

    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);

    distancia = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("%.4f\n",distancia);



    return 0;
}