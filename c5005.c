#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    double s=0.0;
    double a=2.0;
    double b=1.0;
    double c=0.0;
    for(int i=0;i<n;i++)
    {
        s += a/b;
        c=a;
        a=a+b;
        b=c;
    }
    printf("%lf",s);
    return 0;

}



