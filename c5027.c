#include<stdio.h>
int main(void)
{
    int m,n;
    scanf("%d %d",&m,&n);
    double s=0;
    int i,x;
    x=n-m;
    for(i=0;i<=x;i++)
    {
        s+=(m+i)*(m+i)+(double)1.0/(m+i);
    }
    printf("%.6lf",s);
    return 0;
}