#include<stdio.h>

int main() {
    int x= 0;
    

    scanf("%d",&x);

    if (x % 2 == 0) { //numero é par
       
        printf("%d\n", x + 1);
        printf("%d\n", x + 3);
        printf("%d\n", x + 5);
        printf("%d\n", x + 7);
        printf("%d\n", x + 9);
        printf("%d\n", x + 11);

    } else { //numero é impar
         printf("%d\n", x + 2);
        printf("%d\n", x + 4);
        printf("%d\n", x + 6);
        printf("%d\n", x + 8);
        printf("%d\n", x + 10);
        printf("%d\n", x + 12);
    }

    return 0;
}