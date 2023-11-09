#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        char sex;
        float heigh;
        scanf(" %c %f",&sex,&heigh);
        if(sex=='F')
        {
            printf("%.2f\n",heigh*1.09);
        }
        else
        printf("%.2f\n",heigh/1.09);
    }
    return 0;
}