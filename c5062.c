#include<stdio.h>
int main()
{
    int i, j, k, N;
    scanf("%d",&N);
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N-i-1; j++) 
            printf(" ");
        printf("*"); 
        if(i != 0) 
        {   
            for(k = 0; k < 2*i-1; k++) 
            {   
                printf(" ");
            }   
            printf("*"); 
        }   
        puts(""); 
    }   
    
    for(i = N-2; i >= 0; i--) 
    {   
        for(j = 0; j < N-i-1; j++)
            printf(" ");
        printf("*");
        if(0 != i)
        {
            for(k = 0; k < 2*i-1; k++)
            {
                printf(" ");
            }
            printf("*");
        }
        puts("");
    }
 
    return 0;
}
 