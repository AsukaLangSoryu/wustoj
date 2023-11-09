#include<stdio.h>
int main(void)
{
    int n,i;
    int a,b,c,max,min,temp;
    int new;
    scanf("%d",&n);
    if(n==495)
    printf("1: 954 - 459 = 495");
    else if(n!=495)
    {
    for(i=1;n!=495;i++)
    {
        a=n%10;
        b=n/10%10;
        c=n/100%10;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        if (b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        max=a+b*10+c*100;
        min=a*100+b*10+c;
        new=max-min;
        n=new;
        if(i==1)
        printf("%d: %d - %d = %d",i,max,min,new);
        else if(i!=1)
        printf("\n%d: %d - %d = %d",i,max,min,new);
    }
    }
    return 0;
}