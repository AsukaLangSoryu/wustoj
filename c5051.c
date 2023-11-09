#include<stdio.h>
int xianjin(int n);

int main(void)
{
    int n,a,i;
    scanf("%d",&n);
    a=n;
    for(i=1;a!=xianjin(a);i++)
    {
        printf("%d:%d\n",i,xianjin(a));
        a=xianjin(a);
    }
    printf("%d:%d",i,xianjin(a));
}

int xianjin(int n)
{
    int a,b,c,d,e;
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000%10;
    e=n/10000%10;
    int sum;
    sum=(a+b+c+d+e)*3+1;
    return sum;
}