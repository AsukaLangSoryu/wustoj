#include<stdio.h>
#include<string.h>
int main(void)
{
    char c;
    int a=0,b=0;
    while((c=getchar())!='\n'&&c!=EOF)
    {
        if(c==' ')
        {
            if(a>0)
            {
            printf("%d ",a);
            a=0;
            b++;
            }
        }
        else
        {
            a++;
        }
    }
    if(a>0)
    {
        printf("%d",a);
        b++;
    }
    if(b==0)
    printf("0");
    return 0;
}

