#include<stdio.h>

int main() {

    int N = 0;
    int k=0;

    scanf("%d",&N);
    for (k=1;k<=10;k++){
        printf("%d x %d = %d\n",k,N,k*N);
    }
    return 0;
}