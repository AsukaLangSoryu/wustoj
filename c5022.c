#include<stdio.h>

long long int guanggun(int x);

int main(void)
{
    int x,n=2;
    long long int wo,s;
    scanf("%d",&x);
    wo=guanggun(x);
    s=wo/x;

    while (wo!=11)
    {
        wo=(wo-1)/10;
        n++;
    }
    if(x==1)
    {
        printf("1 1");
    }
    else
    {
    printf("%lld %d",s,n);
    }
    return 0;
}


long long int guanggun(int x)
{
    long long int a=11;
    while (a%x!=0)
    {
        a=10*a+1;
    }
    return a;
}