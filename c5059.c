#include<stdio.h>

int sushu(int i);
int main(void)
{
    int m,i;
    scanf("%d",&m);
    int count=0;
    for(i=m-1;count<10;i--)
    {
        if(sushu(i)==1)
        {
            count++;
            printf("%d ",i);
        }
        
    }
}

int sushu(int i)
{
    int a,flag=1;
    for(a=2;a<i;a++)
    {
        if(i%a==0)
        {
            flag=0;
            continue;;
        }
    }
    return flag;
}