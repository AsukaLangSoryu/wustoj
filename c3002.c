#include<stdio.h>
int main(void)
{
    int x,y,a,b,c;
    scanf("%d",&x);
    a=x/100;
    b=(x%100)/10;
    c=x%10;
    y=c*100+b*10+a;
    printf("%d",y);
return 0;
}