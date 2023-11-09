#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
    long double k=1;
    double x,sum=1;
    scanf("%lf",&x);
    do{
        k*=i;
        sum+=pow(x,i)*1.0/k;       
        i++;
    }while(pow(x,i)*1.0/k>0.00001);   
    printf("%.5f",sum);
    
    return 0;
}