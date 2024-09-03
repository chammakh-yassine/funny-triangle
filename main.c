#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,j,n,i;
    printf("entrer un nombre :\n");
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=0;j<(k-i);j++){
                printf(" ");
        }
        for(n=0;n<(1+2*i);n++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
