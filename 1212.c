#include <stdio.h>
int main()
{
    long int digito1, digito2,c, contador,m1,m2,s,comprimento,b;
    while(scanf("%ld %ld",&digito1, &digito2))
    {
        if(digito1==0 && digito2==0)
            break;
        if(digito1>digito2)
            b=digito1;
        else
            b=digito2;
        comprimento=0;
        while(b!=0)
        {
            b/=10;
            comprimento++;
        }
        contador=0;
        c=0;
        while(comprimento!=0)
        {
            m1=digito1%10;
            digito1=digito1/10;
            m2=digito2%10;
            digito2=digito2/10;
            s=m1+m2+c;

            if(s>9)
            {
                contador++;
                c=s/10;
            }
            else
                c=0;
            comprimento--;
        }

            if(contador==0)
                printf("No carry operation.\n");
            else if(contador==1)
               printf("1 carry operation.\n");
            else
                printf("%ld carry operations.\n",contador);
    }

    return 0;
}
