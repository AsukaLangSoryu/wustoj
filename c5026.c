#include<stdio.h>
double jiecheng(int a);
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    double C;
    C=jiecheng(b)/(jiecheng(b-a)*jiecheng(a));
    printf("%.0lf",C);
    return 0;
}

double jiecheng(int a)
{
    if(a<2)
    return a;
    else
    return a*jiecheng(a-1);
}