#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=a%10;
    if((b*b*b+c*c*c+d*d*d)==a)
    printf("YES");
    else
    printf("NO");
    return 0;
}