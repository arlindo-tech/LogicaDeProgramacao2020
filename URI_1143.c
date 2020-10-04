#include<stdio.h>
#include<math.h>

int main() {
    int Nentradas = 0;
    int k=0;

    scanf("%d",&Nentradas);

    for(k=1;k<=Nentradas;k++){
        printf("%d %d %d\n",k,k*k,k*k*k);
    }


    return 0;

}