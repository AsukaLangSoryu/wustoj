#include<stdio.h>
int main(void)
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,a,b=0;
    for(i=m;i<=n;i++)
    {
        a=i*i;
        if(((a%10==i))||((a%100==i))||((a%1000==i))||((a%1000)%100==i)||((a%10000)==i))
        {
            b++;
            if(b==1)
        printf("%d",i);
        else if(b>1)
        printf(" %d",i);
        }
    }
    if(b==0)
    printf("No exist");
    return 0;
}