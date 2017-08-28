#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[20],i,aux[20];

    for (i = 0 ; i<20; i++)

        scanf("%d",&N[i]);

    for (i=0; i<10; i++)
    {
        //aux = N[i]= N[19-1];
        aux[i] = N[i];
        N[i] = N[19-i];
        N [19-i] = aux[i];
    }
    for (i = 0 ; i<20; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
