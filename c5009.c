#include<stdio.h>
int main(void)
{
    int m,n,number;
    scanf("%d %d",&m,&n);
    for(number=0;m<=n;m++)
    {
        if(m%3==2&&m%5==3&&m%7==4)
        {
            if(!number)
            printf("%d",m);
            else
            printf(" %d",m);
            number++;
        }

    }
    if(!number)
    printf("total=%d",number);
    else
    {
        printf("\n");
        printf("total=%d",number);
    }
    return 0;
}




