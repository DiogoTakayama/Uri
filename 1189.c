#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    double M[12][12];
    char Letra[2];
    double soma=0.0;
    scanf("%s",&Letra);

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)

            scanf("%lf",&M[i][j]);

    for(i=0; i<=10; i++)
        if (i<=5)
            for(j=0; j<i; j++)
                soma+=M[i][j];
        else
            for(j=0; j<11-i; j++)
                soma+=M[i][j];
    if (Letra[0]=='M')
        soma=soma/30.0;
    printf("%.1lf\n",soma);


    return 0;

}
