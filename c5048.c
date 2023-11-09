#include<stdio.h>
int main(void)
{
    int a=0,b=0,T=0,flag=1;
    scanf("%d",&T);
    for(int t=0;t<T;t++)
    {
        if(b>a)
        {
            if(flag==1)
            {
                flag=0;
                int i;
                for(i=0;i<10;i++)
                {
                if(i+t==T)
                break;
                a+=3;
                b+=9;
                }
                t+=i-1;
            }
            else if(flag==0)
            {
                flag=1;
                int i;
                for(i=0;i<30;i++)
                {
                    if(i+t==T)
                    break;
                    a+=3;
                }
                t+=i-1;
            }
        }
        else if(a>=b)
        {
            flag=0;
            int i;
            for(i=0;i<10;i++)
            {
                if(t+i==T)
                break;
                a+=3;
                b+=9;
            }
            t+=i-1;
        }
    }
    if(a>b)
    printf("%d",a);
    else
    printf("%d",b);
}