#include <stdio.h>


  int main(){

        int n,horas = 0,minutes = 0,segundos = 0;
        scanf("%d",&n);
        horas = n/3600;
        minutes = (n - (3600*horas))/60;
        segundos = (n - (3600*horas) - (minutes*60));
        printf("%d:%d:%d\n",horas,minutes,segundos);
        return 0;

                 }
