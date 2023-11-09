#include<stdio.h>
int jiecheng(int a);

int main(void)
{
    int n;
    scanf("%d",&n);
    int i;
    int total=0;
    for(i=1;i<=n;i++)
    {
        total+=jiecheng(i);
    }
    printf("%d",total);
    return 0;
}

int jiecheng(int a)
{
    if(a<=2)
    return a;
    else
    return a*jiecheng(a-1);
}