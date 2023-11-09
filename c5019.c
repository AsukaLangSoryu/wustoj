#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a=0,b=0,c=0,d=0,qidian=0,changqidian=0;
    int num=0;
    int x=sqrt(n);
    for(a=2;a<=x;a++)
    {
        c=0;
        d=n;
        qidian=a;
        for(b=a;d % b ==0 && d!=0;b++)
        {
            d /= b;
            c++;
        }
        if(c>num)
        {
            num=c;
            changqidian=qidian;
        }
    }
    int i=0,j=0;
    if(num==0)
    {
        printf("1\n%d",n);
    }
    else
    {
        printf("%d\n",num);
        while (i<num)
        {
            if(j==0)
            printf("%d",changqidian+i);
            else
            {
                printf("*");
                printf("%d",changqidian+i);
            }
            i++;
            j++;
        }
        
    }
    return 0;
}