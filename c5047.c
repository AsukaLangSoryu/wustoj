#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,temp;
    scanf("%d",&n);
    int a,b=0;
    temp=n;
    for(a=2;a<n;a++)
    {
        
        if(temp%a==0)
        {
            temp/=a;
            b++;
            if(b==1)
            printf("%d=%d",n,a);
            else if(b>1)
            printf("*%d",a);
            a=a-1;
        }
    }
    if(b==0)
    printf("%d=%d",n,n);
    return 0;
}