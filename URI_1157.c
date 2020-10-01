#include<stdio.h>

int main() {
    int N = 0;
    int k=0;
    
    scanf("%d", &N);
    for (k=1;k<=N;k++) {
        if (N % k == 0) {
            printf("%d\n",k);
        }
    }
return 0;
}