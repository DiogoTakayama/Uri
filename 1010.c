#include<stdio.h>
int main (){
 int cod1,cod2,num1,num2;
 double val1,val2;

scanf("%d",&cod1);

scanf("%d",&num1);

scanf("%lf",&val1);

scanf("%d",&cod2);

scanf("%d",&num2);

scanf("%lf",&val2);

printf("VALOR A PAGAR: R$ %0.2lf\n",(num1*val1 + num2*val2));


return 0;


}
