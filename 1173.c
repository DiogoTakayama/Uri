#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v,i,N[10];
    scanf("%d",&v);
    N[0]=v;

    for(i = 0;i <10;i++){
        printf("N[%d] = %d\n",i,v);
        v = v+v;
    }
    return 0;
}
