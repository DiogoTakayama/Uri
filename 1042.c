#include <stdio.h>

int main(){

int a,b,c,aux;
int x,y,z;
scanf("%i%i%i",&a,&b,&c);
x=a;
y=b;
z=c;

if (a>b){
    aux =a;
    a=b;
    b=aux;
}
if (b>c){

    aux = b;
    b=c;
    c=aux;
}
if (a>b){
    aux =a;
    a=b;
    b=aux;
}


printf("%i\n%i\n%i\n",a,b,c);
printf("\n");
printf("%i\n%i\n%i\n",x,y,z);

return 0;
}
