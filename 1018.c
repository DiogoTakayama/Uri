#include <stdio.h>
#include<stdlib.h>
int main () {

//100, 50, 20, 10, 5, 2 e 1.

    int notas;
    scanf ("%i",&notas);

    printf ("%i\n",notas);

    printf ("%i nota(s) de R$ 100,00\n",notas/100);
    notas = notas%100;

    printf ("%i nota(s) de R$ 50,00\n",notas/50);
    notas = notas%50;

    printf ("%i nota(s) de R$ 20,00\n",notas/20);
    notas = notas%20;

    printf ("%i nota(s) de R$ 10,00\n",notas/10);
    notas = notas%10;

    printf ("%i nota(s) de R$ 5,00\n",notas/5);
    notas = notas%5;

    printf ("%i nota(s) de R$ 2,00\n",notas/2);
    notas = notas%2;

    printf ("%i nota(s) de R$ 1,00\n",notas/1);
    notas = notas%1;


return 0;
}
