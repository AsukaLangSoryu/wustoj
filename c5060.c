#include<stdio.h>
int main(void)
{
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h>=0&&h<12)
    {printf("Only %02d:%02d.  Too early to Dang.",h,m);
    return 0;
    }
    if(h==12&&m==0)
    printf("Only %02d:%02d.  Too early to Dang.",h,m);
    int i=0;
    int h_;
    h_=h-12;
    while (h_>0)
    {
        i++;
        h_--;
    }
    for(int number=0;number<i;number++)
    printf("Dang");
    if(m>0)
    printf("Dang");
    return 0;
}