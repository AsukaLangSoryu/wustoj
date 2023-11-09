#include<stdio.h>
int main(void)
{
    int n,i=1;
    int a[100000]={0};
    while((scanf("%d",&n))==1)
    {
        a[i]=n;
        i++;
    }
    int x=1;
    if(a[1]==250)
    {
        printf("1");
    }
    else if(a[1]!=250)
    {
    while(a[x]!=250)
    {
        x++;
        if(a[x]==250)
        {
            printf("%d",x);
            break;
        }
    }
    }
    return 0;
}