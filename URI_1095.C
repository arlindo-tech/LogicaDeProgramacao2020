#include<stdio.h>

int main() {
    int I = 1;
    int J = 60;
    int k = 0;
    
    printf("I=1 J=60\n");

    for (k=0;k<12;k++) {
        I = I + 3;
        J = J - 5;
        printf("I=%d J=%d\n",I,J);
    }

    return 0;
}