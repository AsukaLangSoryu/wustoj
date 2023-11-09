#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int i;
    float temp=1,total=0;   
    for(i=0;i<n;i++)
    {
        total+=pow(-1,i)/temp;
        temp+=3;
    } 
    printf("%.4f",total);
    return 0;
}