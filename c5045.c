#include<stdio.h>
int main(void)
{
    int n,u,d;
    scanf("%d %d %d",&n,&u,&d);
    if(u>=n)
    printf("1");
    else if(u<n)
    {
    int t=0,x=0;
    while (1)
    {
        t++;
        if(t*(u-d)+d>=n)
        {
            x=t*2-1;
            break;
        }
        else
        continue;
    }
    
    printf("%d",x);
    }
}