#include<stdio.h>
int main(void)
{
    int m,n;
    int a=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%3==0)
        {
            if(((i%5==0)&&i%10!=0)||((i/10%5)==0&&i/10>0&&(i/10)%10!=0)||((i/100%5)==0&&i/100>0&&(i/100)%10!=0)||((i/1000%5)==0&&i/1000>0&&(i/1000)%10!=0))
            {
                a++;
                if(a==1)
        {
            printf("%d",i);
        }
        else
        {
            printf(" %d",i);
        }   
            }            
        }        
    }
    if(a==0)
    printf("No exist");
    return 0;
}