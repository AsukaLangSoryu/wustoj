#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int x,y,z=0;
    for(x=1;x<n;x++)
    {
        for(y=x;y<n;y++)
        {
            if(x*x+y*y==n)
            {
                z++;
                if(z==1)
                printf("%d %d",x,y);
                else if(z>1)
                printf("\n%d %d",x,y);
            }
        }
    }
    if(z==0)
    {
        printf("No Solution");
    }
}