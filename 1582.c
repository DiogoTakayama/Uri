
#include<stdio.h>

int pitagoras(int a,int b,int c);
int mdc(int a,int b);

int main()
{
      int a,b,c;

       while(scanf("%d %d %d",&a,&b,&c)==3){

         if( pitagoras(a,b,c)==1 && mdc(mdc(a,b),c)==1)
            printf("tripla pitagorica primitiva\n");
            else if(pitagoras(a,b,c))
            printf("tripla pitagorica\n");
            else
            printf("tripla\n");
       }
      return 0;
}

int pitagoras(int a,int b,int c){
int s1, s2, s3;
        if (a >= b && b >= c || a >= c && c >= b) {
            s3 = a;
            s1 = b;
            s2 = c;
        } else if (b >= a && a >= c || b >= c && c >= a) {
            s3 = b;
            s1 = c;
            s2 = a;
        } else {
            s3 = c;
            s2 = a;
            s1 = b;
        }
        return s1 * s1 + s2 * s2 == s3 * s3;
    }

int mdc(int a,int b)
{
int tmp=0;
      while(b!=0){
      tmp=b;
      b=a%b;
      a=tmp;
      }
      return a ;
}
