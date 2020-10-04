#include<stdio.h>

int main() {
    int numA = 0;
    int numB = 0;

    scanf("%d %d",&numA,&numB);
    if (numA%numB == 0 || numB%numA == 0) {
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}