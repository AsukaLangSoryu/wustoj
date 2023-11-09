#include<stdio.h>
int main(void)
{
    int years;
    scanf("%d",&years);
if(years%4==0)
{
    if(years%100!=0||years%400==0)
    printf("%d is a leap year!",years);
    else if(years%100==0&&years%400!=0)
    printf("%d isn't a leap year!",years);
}
else
printf("%d isn't a leap year!",years);
return 0;
}