#include <stdio.h>
#include <stdlib.h>
// 0 1 1 2 3 5
int main()
{
    int prox=1,ante=0,soma=0,i,n;
    scanf("%d",&n);

    printf("0");
    for(i=2;i<=n;++i){

        soma = prox+ante;
        ante = prox;
        prox=soma;
        printf(" %d",ante);
    }
    printf("\n");

    return 0;
}
