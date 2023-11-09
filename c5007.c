#include<stdio.h>
int Fibonacci(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        if(i%5==0)
        {
            printf("\n");
        }
        printf("%10d",Fibonacci(i));
    }
return 0;
}

int Fibonacci(int n)
{
    if(n<=1)
    return 1;
    else 
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }    
}


