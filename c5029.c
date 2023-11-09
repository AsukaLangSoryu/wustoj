#include<stdio.h>
int main(void)
{
    int a,b,n=0;
    scanf("%d %d",&a,&b);
    int sushu[10000]={0};
    int c=b-a;
    int total=0;
    for(int i=0;i<=c;i++)
    {
        for(int x=2;x<=(a+i);x++)
        {
            if((a+i)%x==0&&(a+i)!=x)
            break;
            else if((a+i)==x)
            {
                sushu[i]=x;
                n++;
            }
        }
    }
    for(int i=0;i<=c;i++)
    total+=sushu[i];
    printf("%d %d",n,total);
    return 0;
}