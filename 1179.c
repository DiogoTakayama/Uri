
//Não está 100%
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par[5],impar[5];int QuantPar = 0,QuantImp = 0,x,i,j;
    for(i=0;i<15;i++){
            scanf("%d",&x);
        if (x%2==0){
            par [QuantPar]=x;
            QuantPar++;
        }
        if (QuantPar==5){

        for (j=0;j<5;j++)
            printf("par[%d] = %d\n",j,par[j]);
            QuantPar =0;


        }else{

            impar [QuantImp]=x;
            QuantImp++;
        if (QuantImp==5){

        for (j=0;j<5;j++)
            printf("impar[%d] = %d\n",j,impar[j]);
            QuantImp =0;
        }
        }
     for (j=0;j<QuantImp;j++){
            printf("impar[%d] = %d\n",j,impar[j]);
            QuantImp =0;
     }
     for (j=0;j<QuantPar;j++){
            printf("par[%d] = %d\n",j,par[j]);
            QuantImp =0;
     }
    }

    return 0;
}
