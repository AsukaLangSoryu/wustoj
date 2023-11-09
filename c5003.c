#include <stdio.h>
int main()
{
    int i,n=1,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    n=n*i;
    printf("%d!=%d",x,n);
    return 0;
}