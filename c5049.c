#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d/%d",&a,&b);
    if(a>b)
    c=a;
    else
    c=b;
    for(int i=2;i<=c;i++)
    {
        if(a%i==0&&b%i==0)
        {
        a/=i;
        b/=i;
        }
    }
    printf("%d/%d",a,b);
}