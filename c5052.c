#include<stdio.h>
int chuxing(int n);
int chuxingshu(int n);

int main(void)
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(chuxing(i)==1)
        {
            printf("%d(%d)\n",i,chuxingshu(i));
            count++;
        }
        if(chuxing(i)==0)
        continue;
    }
    if(count==0)
    printf("None");
    return 0;
}

int chuxing(int n)
{
    int flag=0;
    int sum[100];
    for(int i=2,temp=n;i<=9;i++)
    {
        temp=n*i;
        int a,b,c,d,e,f;
        a=temp%10;
        b=temp/10%10;
        c=temp/100%10;
        d=temp/1000%10;
        e=temp/10000%10;
        f=temp/100000%10;
        sum[i]=a+b+c+d+e+f;
    }
    for(int i=2;i<9;i++)
    {
        if(sum[i]!=sum[i+1])
        {
            flag=1;
            break;
        }
        if(sum[i]==sum[i+1])
        continue;
    }
    if(flag==1)
    return 0;
    else if(flag==0) 
    return 1;   
}

int chuxingshu(int n)
{
    int a,b,c,d,e,f,sum;
        a=n%10;
        b=n/10%10;
        c=n/100%10;
        d=n/1000%10;
        e=n/10000%10;
        f=n/100000%10;
        sum=a+b+c+d+e+f;
        return sum;
}