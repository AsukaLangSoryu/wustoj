#include<stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int temp_1=0,temp_2=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        temp_1+=i;
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        temp_2+=i;
    }
    if(a==temp_2&&b==temp_1)
    printf("YES");
    else
    printf("NO");
    return 0;
}