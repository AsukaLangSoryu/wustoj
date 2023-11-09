#include<stdio.h>
int main(void)
{
    double n,number=1;
    scanf("%lf",&n);
    for(int i=1;i<n;i++)
    {
        number=(number+1)*2;
    }
    printf("%.0lf",number);
    return 0;
}