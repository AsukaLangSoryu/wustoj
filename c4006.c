#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    if(a>85)
    printf("very good");
    else if(a>=60&&a<=85)
    printf("good");
    else if(a<60)
    printf("no good");
    return 0;
}