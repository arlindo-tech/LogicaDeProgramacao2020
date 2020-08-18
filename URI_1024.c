#include <stdio.h>

int main(void) {

//Declaração de variaveis
float inputValue = 0;
int N100 = 0;
int N50 = 0;
int N20 = 0;
int N10 = 0;
int N5 = 0;
int N2 =0;

int M1 = 0;
int M050 = 0;
int M025 = 0;
int M010 = 0;
int M005 = 0;
double M001 = 0;

scanf("%f", &inputValue);


if (0.00 < inputValue < 1000000.00) { 
N100 = inputValue/100;
N50 = ((inputValue-(N100*100))/50);
N20  = ((inputValue - (N100*100) - (N50*50))/20);
N10 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20))/10);
N5 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10)) /5);
N2 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10) - (N5 *5)) /2);

M1 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10) - (N5 *5) - (N2 * 2)) /1);
M050 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10) - (N5 *5) - (N2 * 2) - (M1 * 1) ) /0.5); 
M025 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10) - (N5 *5) - (N2 * 2) - (M1 * 1) - (M050*0.50)  ) /0.25); 
M010 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10) - (N5 *5) - (N2 * 2) - (M1 * 1) - (M050*0.50) - (M025 * 0.25) ) /0.10);
M005 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10) - (N5 *5) - (N2 * 2) - (M1 * 1) - (M050*0.50) - (M025 * 0.25) - (M010 * 0.10)) /0.05);
M001 = ((inputValue - (N100*100) - (N50*50) - (N20 * 20) - (N10 * 10) - (N5 *5) - (N2 * 2) - (M1 * 1) - (M050*0.50) - (M025 * 0.25) - (M010 * 0.10) - (M005 * 0.05 ))/0.01 );


printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",N100);
printf("%d nota(s) de R$ 50.00\n",N50);
printf("%d nota(s) de R$ 20.00\n",N20);
printf("%d nota(s) de R$ 10.00\n",N10);
printf("%d nota(s) de R$ 5.00\n",N5);
printf("%d nota(s) de R$ 2.00\n",N2);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",M1);
printf("%d moeda(s) de R$ 0.50\n",M050);
printf("%d moeda(s) de R$ 0.25\n",M025);
printf("%d moeda(s) de R$ 0.10\n",M010);
printf("%d moeda(s) de R$ 0.05\n",M005);
printf("%.0lf moeda(s) de R$ 0.01\n",M001);

return 0;
}
}