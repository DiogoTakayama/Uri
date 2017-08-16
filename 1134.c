#include <stdio.h>
#include <stdlib.h>

int main()
{


    int a=0,g=0,d=0,num;

    while(num!=4)
    {
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            a++;
            break;
        case 2:
            g++;
            break;
        case 3:
            d++;
            break;


        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}
