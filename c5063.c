#include<stdio.h>
int sushu(int n);
int main(void)
{
    int a,flag=0;
    scanf("%d",&a);
    int i;
    for(i=a;flag!=1;i++)
    {
        if(sushu(i)==1)
        {
            if(sushu(i+2)==1)
            flag=1;
        }
    }
    printf("%d %d",i-1,i+1);
    return 0;
}

int sushu(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}