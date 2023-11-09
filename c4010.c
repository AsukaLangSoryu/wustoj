#include<stdio.h>
#include<math.h>
int main(void)
{
    double x,y,z;
    scanf("%lf",&x);
    if(x<=2.5)
    y=x*x+1;
    else if(x>2.5)
    y=x*x-1;
    if(x>=1&&x<2)
    z=3*x+5;
    else if(x>=2&&x<3)
    z=2*sin(x)-1;
    else if(x>=3&&x<5)
    z=sqrt(1+x*x);
    else if(x>=5&&x<8)
    z=x*x-2*x+5;
    printf("%lf\n",y);
    printf("%lf",z);
    return 0;
}