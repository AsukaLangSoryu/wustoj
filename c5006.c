#include<stdio.h>
#include<stdlib.h>
void up_and_down(int n,int a);
void spaces(int y);
void stars(int z);
void line(int n,int a);

int main(void)
{
    int n;
    scanf("%d",&n);
    up_and_down(n,1);
    return 0;
}

void spaces(int y)
{
    for(int i=0;i<y;i++)
    {
        printf(" ");
    }
}

void stars(int z)
{
    for(int i=0;i<z;i++)
    {
        printf("*");
    }
}

void line(int n,int a)
{
    int y=abs(n-a);
    int z=2*(n-y)-1;

    spaces(y);
    stars(z);
    printf("\n");
}

void up_and_down(int n,int a)
{
    if(a>2*n-1)
    return;

    line(n,a);
    up_and_down(n,a+1);
}





