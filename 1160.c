#include <stdio.h>
int main(){

    int t, c, m;
    int pa, pb;
    double g1, g2;

    scanf("%d", &t);

    for(m=1; m<=t; m++)
    {
        c = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while(pa <= pb)
        {
            pa *= (g1 / 100.0) + 1.0;
            pb *= (g2 / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c <= 100)
            printf("%d anos.\n", c);
    }
    return 0;
}
