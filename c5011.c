#include<stdio.h>
int main(void)
{
    int n;
    double a=0.0,h=100.0;
    scanf("%d",&n);
    if(n==1)
    printf("%lf %lf",h,h/2);
    else
    {
        for(int i=2;i<=n;i++)
        {
            h=h/2;
            a+=2*h;
        }
        printf("%lf %lf",a+100,h/2);
    }
    return 0;
}