#include<stdio.h>
#include<math.h>
long long int huiwen(long long int n);
int main(void)
{
    int count=0;
    long long int n,m;
    scanf("%lld",&n);
    m=huiwen(n);
    printf("%lld",n);
    
    while (m!=n)
    {
        n+=m;
        m=huiwen(n);
        printf("--->%lld",n);
        count++;
    }
    
    printf("\n%lld",count);
    return 0;
}


long long int huiwen(long long int n)
{
    long long int a=0,b;
    while (n!=0)
    {
        b=n%10;
        a=a*10+b;
        n/=10;
    }
    return a;
}
