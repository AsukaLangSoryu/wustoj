#include<stdio.h>
#include<math.h>
int main(void)
{
    double n;
    scanf("%lf",&n);
    int a,sum=0;
    a=log10(n)+1;
    while(n>0)
    {
        sum+=((int)n%10);
        n/=10;
    }
    printf("%d %d",a,sum);
}