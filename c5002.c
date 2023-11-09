#include<stdio.h>
int main(void)
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=a;
    while (a%x!=0||b%x!=0)
    {
        x--;
    }
    printf("%d",x);
  return 0;
    
}