#include <stdio.h>

int main()
{
    int n,j,i, f;
    unsigned long long fibonacci[61];//Inteiros longos
    scanf("%d",&n);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(i = 2; i <= 60; i++)//Calcula fibonacci até 60
    {
        fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }

    for(j = 0; j < n; j++)
    {
        scanf("%d",&f);
        printf("Fib(%d) = %llu\n",f,fibonacci[f]);
    }
    return 0;
}
