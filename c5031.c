#include<stdio.h>
int naotan(int a,int n);

int main(void)
{
    int a,n;
    int s;
    scanf("%d %d",&a,&n);
    s=naotan(a,n);
    printf("%d",s);
    return 0;
}

int naotan(int a,int n)
{
    int i;
    int sum=0,temp=a;
    for(i=0;i<n;i++)
    {
        sum+=temp;
        temp=temp*10+a;
    }
    return sum;
}