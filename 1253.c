#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,t,tam;
    char str[52],a;
    scanf("%d",&n); //printf("\n\nEscreva o num de repeticoes:");
    for(i = 0;i < n;i++){
        scanf("%s %d",str, &t);        //printf("\nDigite a frase e posicao de deslocamento a ser encriptada:");
        tam=strlen(str);//Pega o tamanho da string
        for(j = 0;j < tam;j++){
            a=str[j]-t;
            if(a<65)
                a+=26;//A na ascii é o 65
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
