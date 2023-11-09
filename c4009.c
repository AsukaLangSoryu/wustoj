#include<stdio.h>
int main(void)
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if(a<12)
    {
        x=a;
        printf("%d %d %d AM",x,b,c);
    }
    
    if(a>=12)
    {
        x=a-12;
        printf("%d %d %d PM",x,b,c);
    }
    return 0;
}