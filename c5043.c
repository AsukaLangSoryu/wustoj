#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    int b,c,d;
    b=a+1;
    c=a+2;
    d=a+3;
    if(a==0)
    printf(" %d  %d  %d  %d  %d  %d\n",a*100+b*10+c,a*100+b*10+d,a*100+c*10+b,a*100+c*10+d,a*100+d*10+b,a*100+d*10+c);
    else if(a!=0)
    printf("%d %d %d %d %d %d\n",a*100+b*10+c,a*100+b*10+d,a*100+c*10+b,a*100+c*10+d,a*100+d*10+b,a*100+d*10+c);
    printf("%d %d %d %d %d %d\n",b*100+a*10+c,b*100+a*10+d,b*100+c*10+a,b*100+c*10+d,b*100+d*10+a,b*100+d*10+c);
    printf("%d %d %d %d %d %d\n",c*100+a*10+b,c*100+a*10+d,c*100+b*10+a,c*100+b*10+d,c*100+d*10+a,c*100+d*10+b);
    printf("%d %d %d %d %d %d",d*100+a*10+b,d*100+a*10+c,d*100+b*10+a,d*100+b*10+c,d*100+c*10+a,d*100+c*10+b);
    return 0;
}