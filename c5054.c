#include<stdio.h>
int main(void)
{
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    int ch[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ch[i]);
        if(ch[i]>=85)
        a++;
        else if(ch[i]<85&&ch[i]>=60)
        b++;
        else if(ch[i]<60)
        c++;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}