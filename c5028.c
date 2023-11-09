#include<stdio.h>

double jiecheng(int a);

int main(void)
{
    int n;
    scanf("%d",&n);
    double e;
    for(int i=1;i<=n;i++)
    {
        e+=1.00/jiecheng(i);
    }
    printf("%.8lf",e+1);
    return 0;
}

double jiecheng(int a)
{
    if(a<=2)
    return a;
    else
    return a*jiecheng(a-1);
}