#include<stdio.h>
#include<math.h>

int main(void)
{
    int i,j,k,l;
    int x,n;
    scanf("%d",&n);
    x=sqrt((n+1)/2);
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++)
        printf(" ");
        for(j=0;j<2*(x-i)-1;j++)
        printf("*");
        printf("\n");
    }
    for(i=2;i<=x;i++)
    {
        for(j=0;j<x-i;j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("*");
        printf("\n");
    }
    printf("%d",n-2*x*x+1);
}