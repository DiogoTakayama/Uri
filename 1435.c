#include<stdio.h>
int main()
{
    int i,j,num,x;
    while(1==scanf("%d",&num))
    {

        if(num==0)
            break;
        for(i=1; i<=num; i++)
        {
            for(j=1; j<=num; j++)
            {
                x = i;
                if(j < x)
                    x = j;
                    
                if(num-i+1 < x)
                    x = num-i+1;
                    
                if(num-j+1 < x)
                    x = num-j+1;
                printf("%3d",x);
                
                if(j < num)
                    printf(" ");
                    
                else
                    printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
