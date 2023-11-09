#include<stdio.h>
int main(void)
{
    int c;
    int total;
    while((scanf("%d",&c))==1)
    {
        if(c<=0)
        break;
        else if(c>0&&c%2==0)
        continue;
        else if(c>0&&c%2!=0)
        total+=c;
    }
    printf("%d",total);
    return 0;
}