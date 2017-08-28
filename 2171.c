#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,j=0,i;
    long  int r;
    while (scanf("%li",&r) && r!=0){
        j=0;
        for( i = 1;j+i<=r;i++){
            j +=i;
        }
        printf("%li %li\n",j,r - j);
    }
    return 0;
}
