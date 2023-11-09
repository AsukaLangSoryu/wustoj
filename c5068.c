#include<stdio.h>
int shabi(int a);
int main(void)
{
    int n,count=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        
        if(shabi(i)==1)
        {
            if(count%8==0)
            printf("\n");
            printf("%6d",i);
            count++;
        }
    }
    if(count==1)
    printf("None");
    return 0;
}

int shabi(int a)
{
    int x=0;
    while (a!=0)
    {
        x+=a%10;
        a/=10;
    }
    if(x==15)
    return 1;
    else
    return 0;
}