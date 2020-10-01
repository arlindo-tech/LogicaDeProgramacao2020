#include<stdio.h>

int main() {
    int nEntrada = 0;
    int k=0;


    scanf("%d", &nEntrada);

    for (k=0 ; k<= nEntrada ; k++) {
        if (k % 2 != 0) {
            printf("%d\n",k);
        }
    }

return 0;
}