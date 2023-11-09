#include<stdio.h>
#include<math.h>
int weishu(unsigned int n);
int main(void)
{
    unsigned int a,b;
    double sum;
    scanf("%d %d",&a,&b);
    unsigned int c=a*b;
    int i;
    i=weishu(c);
    for(int t=0;t<i;t++)
    {
        sum+=(c%10)*pow(10,i-t-1);
        c/=10;
    }
    printf("%.0lf",sum);
    return 0;
}

int weishu(unsigned int n)
{
    int i=0;
    while (n>0)
    {
        i++;
        n/=10;
    }
    return i;
}