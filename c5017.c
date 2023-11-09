#include<stdio.h>
void faying(int a);
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
        printf("fu ");
    }
    int a,b,c,d,e,f,g,h,i,j;   
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=(n/10000)%10;
    f=(n/100000)%10;
    g=(n/1000000)%10;
    h=(n/10000000)%10;
    i=(n/100000000)%10;
    j=(n/1000000000)%10;
    if(n>=0&&n<10)
    {
        faying(a);
    }
    else if(n>=10&&n<100)
    {
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=100&&n<1000)
    {
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=1000&&n<10000)
    {
        faying(d);
        printf(" ");
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=10000&&n<100000)
    {
        faying(e);
        printf(" ");
        faying(d);
        printf(" ");
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=100000&&n<1000000)
    {
        faying(f);
        printf(" ");
        faying(e);
        printf(" ");
        faying(d);
        printf(" ");
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=1000000&&n<10000000)
    {
        faying(g);
        printf(" ");
        faying(f);
        printf(" ");
        faying(e);
        printf(" ");
        faying(d);
        printf(" ");
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=10000000&&n<=100000000)
    {
        faying(h);
        printf(" ");
        faying(g);
        printf(" ");
        faying(f);
        printf(" ");
        faying(e);
        printf(" ");
        faying(d);
        printf(" ");
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=100000000&&n<1000000000)
    {
        faying(i);
        printf(" ");
        faying(h);
        printf(" ");
        faying(g);
        printf(" ");
        faying(f);
        printf(" ");
        faying(e);
        printf(" ");
        faying(d);
        printf(" ");
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    else if(n>=1000000000&&n<2147483647)
    {
        faying(j);
        printf(" ");
        faying(i);
        printf(" ");
        faying(h);
        printf(" ");
        faying(g);
        printf(" ");
        faying(f);
        printf(" ");
        faying(e);
        printf(" ");
        faying(d);
        printf(" ");
        faying(c);
        printf(" ");
        faying(b);
        printf(" ");
        faying(a);
    }
    return 0;
}

void faying(int a)
{
    switch (a)
    {
    case 0:
         printf("ling");
         break;
    case 1:
         printf("yi");
         break;
    case 2:
         printf("er");
         break;
    case 3:
         printf("san");
         break;
    case 4:
         printf("si");
         break;
    case 5:
         printf("wu");
         break;
    case 6:
         printf("liu");
         break;
    case 7:
         printf("qi");
         break;
    case 8:
         printf("ba");
         break;
    case 9:
         printf("jiu");
         break;
    }
}




    