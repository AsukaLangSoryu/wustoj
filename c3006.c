#include<stdio.h>
#define apple 2.5
#define li 1.7
#define banana 2.0
#define orange 1.2
int main(void)
{
    float a,b,c,d,money;
    scanf("%f %f %f %f",&a,&b,&c,&d);
money=a*apple+b*li+c*banana+d*orange;
printf("%.2f",money);
return 0;
}