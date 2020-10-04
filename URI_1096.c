#include<stdio.h>

int main() {
    int I = 1;
    int J = 7;
    int k = 0;
    
    printf("I=1 J=7\n");

    for (k=1;k<=14;k++) {
        
        J = J - 1;
        
        if ((k)%3==0){
        I = I + 2;
        J = 7;
        }

        printf("I=%d J=%d\n",I,J);
    }

    return 0;
}