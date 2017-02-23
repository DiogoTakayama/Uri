#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[20];double Sal_Fix;double Tot_Ven;

        scanf(" %s",&nome);
        scanf("%lf",&Sal_Fix);
        scanf("%lf",&Tot_Ven);
    printf("TOTAL = R$ %0.2lf\n",Sal_Fix + (Tot_Ven*0.15));
system("pause");


return 0;
}
