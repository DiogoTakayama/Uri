#include <stdio.h>

int main(){

    int N[1000], t, y,z;

    scanf ("%d", &t);


    for(y=0,z=0; y<1000; y++)
    {
        printf("N[%d] = %d\n",y,z);

        z++;

        if(z==t)
            z=0;
    }
    return 0;
}
