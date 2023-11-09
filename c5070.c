#include<stdio.h>
#define N 35
int main(void)
{
    int a[N][N];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(int j=0;j<n-i-1;j++)
            printf("     ");
        for(int k=1;k<i;k++)
            a[i][k]=a[i-1][k-1]+a[i-1][k];
        for(int k=0;k<=i;k++)
        {
            printf("%10d",a[i][k]);
            if(k==i)
                printf("\n");
        }
    }
    return 0;
}