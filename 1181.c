#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Linha,i,j;
    double M[12][12];
    char Letra[2];
    double soma=0.0;
    scanf("%d",&Linha);
    scanf("%s",&Letra);

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)

            scanf("%lf",&M[i][j]);

    for(j=0; j<12; j++)
        soma+=M[Linha][j];

    if (Letra[0]=='M')
        soma=soma/12.0;
    printf("%.1lf\n",soma);


    return 0;
}
