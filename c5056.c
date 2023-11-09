#include<stdio.h>
int main(void)
{
    int a,b,c,d,e=0,i;
    int n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        b=0;
        c=0;
        d=i;
        while (d)
        {
            a=d%2;
            d/=2;
            if(a==1)
            b++;
            else
            c++;
        }
        if(b>c)
        e++;
        
    }
    printf("%d",e);
    return 0;
}