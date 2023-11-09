#include<stdio.h>
int main(void)
{
    int x,y1,y2,y3,i;
    scanf("%d %d %d %d",&x,&y1,&y2,&y3);
    i=1;
    while(x+i>y1+y2+y3+3*i)
    {
        i++;
    }
    if(x==y1+y2+y3)
    {
        printf("0");
    }
    else
    printf("%d",i);
    return 0;
}
