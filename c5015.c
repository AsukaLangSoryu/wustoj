#include<stdio.h>
int main(void)
{
    int n,m;
    char ch;
    scanf("%d %c",&n,&ch);
    if(n%2==0)
    m=n/2;
    else
    m=n/2+1;
    int x,y;
    for(x=1;x<=m;x++)
    {
        for(y=1;y<=n;y++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}