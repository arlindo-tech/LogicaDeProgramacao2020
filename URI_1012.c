#include <stdio.h>
 
int main() {
  double A = 0;
  double B = 0;
  double C = 0;

  scanf("%lf %lf %lf",&A,&B,&C);

  printf("TRIANGULO: %.3lf\n", (A * C)/2 );
  printf("CIRCULO: %.3lf\n", 3.14159 * C * C );
  printf("TRAPEZIO: %.3lf\n",(((A+B)*C)/2) );
  printf("QUADRADO: %.3lf\n",B *B );
  printf("RETANGULO: %.3lf\n",A *B );
    return 0;
}