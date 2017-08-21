//Falta complementar
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par[5],impar[5];
    int QuantPar = 0,QuantImp = 0;
    int x,i,j,k,l;


    for(i=0; i<15; i++)
    {

        scanf("%d",&x);
        if (x%2==0)
        {
            par [QuantPar]=x;
            QuantPar++;

            if (QuantPar==5)
            {

                for (j=0; j<5; j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                    QuantPar =0;


                }
            }
        }
        else
        {
            impar [QuantImp]=x;
            QuantImp++;
            if (QuantImp==5)
            {
                for (k=0; k<5; k++)
                {
                    printf("impar[%d] = %d\n",k,impar[k]);
                    QuantPar =0;

                }

            }

        }


    }








    return 0;
}
