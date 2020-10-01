#include<stdio.h>

int main() {
    int InputNumber = 0;
    int k =0;
    int QtdadePares = 0;

    for (k=0; k <5 ; k++) {
        scanf("%d",&InputNumber);
        if (InputNumber % 2 == 0) {
            QtdadePares = QtdadePares + 1;
        }
    }

    printf("%d valores pares", QtdadePares);


return 0;
}