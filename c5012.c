#include<stdio.h>
int main(void)
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a,b;
    if ((n % 2 == 0) && (4*m >= n) && (2*m <= n)) 
    {
        a=2*m-n/2;
        b=n/2-m;
        printf("%d %d",a,b);
    }
    else
    {
        printf("Error");
    }
    return 0;
}

