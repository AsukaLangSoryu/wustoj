#include<stdio.h>
#include<math.h>
int sushu(int n);
int main(void)
{
    int n,m,z=0;
    scanf("%d",&n);
    int i;
    for(i=2;i<=n;i++)
    {
        
        m=pow(2,i)-1;
        if(sushu(m)==1)
        {
            z++;
            if(z==1)
            printf("%d",m);
            else
            printf("\n%d",m);
        }
        else if(sushu(m)!=1)
        continue;
    }
    if(n==1)
        {
            printf("None");
        }
    return 0;
}

int sushu(int n)
{
    int i;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}