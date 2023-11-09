#include<stdio.h>
int main(void)
{
    int m;
    double n,temp;
    scanf("%d",&m);
    double ch[1000];
    for(int i=0;i<m;i++)
    {
        scanf("%lf",&ch[i]);
        temp+=1/ch[i];
    }
    n=(double)m/temp;
    printf("%.2lf",n);
}