#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int a =1,b=2,c=3,num,i;
    scanf("%d",&num);

    for (i=0; i<num; ++i)
    {

        printf("%d %d %d PUM\n",a,b,c);
        a=a+4;
        b=b+4;
        c=c+4;
    }

return 0;
}
