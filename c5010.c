#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    double a=0.0,PI;
    double i;
    for(i=1.0;i<=n;i++)
    {
        a+=1/(4*i-3)-1/(4*i-1);
    }
    PI=4*a;
    printf("%lf",PI);
    return 0;
}


