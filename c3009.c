#include<stdio.h>
int main(void)
{
    float a_1,a_2;
    int b;
    char ch;
    scanf("%f %d %c %f",&a_1, &b, &ch, &a_2);
    printf("%c %d %0.2f %0.2f",ch,b,a_1,a_2);
    return 0;
}