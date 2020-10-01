#include<stdio.h>
int main () {
    int numA = 0;
    int numB = 0;
    
    scanf("%d %d",&numA,&numB);
    while ( numA != numB) {
        if (numA > numB) {
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
        scanf("%d %d",&numA,&numB);
    }
    return 0;
}