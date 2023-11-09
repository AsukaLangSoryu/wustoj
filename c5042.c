#include<stdio.h>
int main(void)
{
    int m,n;

    scanf("%d %d",&m,&n);
    int sum,i,x,z=0;
    for(x=m;x<=n;x++)
    {
        sum=0;
        for(i=1;i<x;i++)
        {
            if(x%i==0)
            {
                sum+=i;  
            }
        }
        if(sum==x)
        {
            z++;
            if(z==1)
            printf("%d = 1",sum);
            else if(z!=1)
            printf("\n%d = 1",sum);
            for(i=2;i<x;i++)
            {
                if(x%i==0)
                {
                    printf(" + %d",i);
                }
            }
        }
    }
    if(z==0)
    printf("None");
    return 0;
}