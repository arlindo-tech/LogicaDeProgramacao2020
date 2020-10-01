#include<stdio.h>
int main() {

    int N = 0;
    int k=1;

    scanf("%d",&N);

    for (k=1; k <= N; k++) {
        if (k % 2 == 0 ){
        printf("%d ^ 2 = %d\n",k, k*k);
        }
    }
    return 0;
}