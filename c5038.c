#include<stdio.h>
int main(void)
{
    int n,i,x=0,y;
    scanf("%d",&n);
    int hang,lie;
    for(hang=0,lie=n;hang<n,lie>0;hang++,lie--)
    {
        y=0;
        for(i=0;i<lie;i++,x++,y++)
        {
            if(y==0)
            printf("%c",'A'+x);
            else if(y!=0)
            printf(" %c",'A'+x);
        }
        if(y!=1)
        printf("\n");
    }
    return 0;
}