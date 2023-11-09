#include<stdio.h>
int main(void)
{
    char n;
    while ((n=getchar())!='\n')
    {    
        if(n>='a'&&n<'z')
        printf("%c",n-32+1);
        else if(n>='A'&&n<'Z')
        printf("%c",n+32+1);
        else if(n=='z')
        printf("A");
        else if(n=='Z')
        printf("a");
        else 
        putchar(n);
    }
    
}