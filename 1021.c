#include <stdio.h>
#include<stdlib.h>
int main () {


    int notas=0,notas1=0,n=0;
    scanf ("%d.%d",&notas,&notas1);
	n = notas * 100 + notas1;
    printf ("NOTAS:\n");
	 
    printf ("%d nota(s) de R$ 100.00\n", n/10000);
    n = n%10000;

    printf ("%i nota(s) de R$ 50.00\n",n /5000);
    n = n%5000;

    printf ("%i nota(s) de R$ 20.00\n",n/2000);
    n = n%2000;

    printf ("%i nota(s) de R$ 10.00\n",n/1000);
    n = n%1000;

    printf ("%i nota(s) de R$ 5.00\n",n/500);
    n = n%500;

    printf ("%i nota(s) de R$ 2.00\n",n/200);
    n = n%200;

    
    printf ("MOEDAS:\n");

    printf ("%i moeda(s) de R$ 1.00\n",n/100);
    n = n%100;
    printf ("%i moeda(s) de R$ 0.50\n",n/50);
    n = n%50;
    printf ("%i moeda(s) de R$ 0.25\n",n/25);
    n = n%25;
    printf ("%i moeda(s) de R$ 0.10\n",n/10);
    n = n%10;
    printf ("%i moeda(s) de R$ 0.05\n",n/5);
    n = n%5;
    printf ("%d moeda(s) de R$ 0.01\n",n/1);
    n = n;

return 0;
}
