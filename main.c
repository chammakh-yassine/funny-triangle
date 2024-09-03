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
    /*int a,i,j;
    char e;
    e='-';
    printf("entrer un nombre");
    scanf("%d",&a);
    printf("x*y i");
    for(i=0;i<a;i++){
        printf("%4d",i);
    }
    printf("\n-----");
    for(j=0;j<a;j++){
        putchar("a");
    }*/
    return 0;
}
