#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    float s=0,i;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s=1/((i+1)*i)+s;
        
    }
    printf("%.5f",s);
    return 0;

}