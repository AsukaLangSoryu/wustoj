#include<stdio.h>
int main(void)
{
    double x,y,z,l;
    scanf("%lf %lf",&x,&y);
z=x*(y/100);
l=x+z;
printf("%11.2f \n%11.2f \n%11.2f",x,z,l);
return 0;
}

