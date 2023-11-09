#include<stdio.h>
int main(void)
{
    int y,i;
    scanf("%d",&y);
    if(y<=2000)
    printf("Invalid year!");
    else if(y>=2004)
    {
        for(i=2004;i<=y;i+=4)
        {
            if(i%100==0&&i%400!=0)
            continue;
            printf("%d\n",i);
        }
    }
    else if(y>2000&&y<2004)
    printf("None");
    return 0;
}