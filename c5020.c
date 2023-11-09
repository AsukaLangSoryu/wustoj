#include <stdio.h>

int main(void) 
{
    int i,n,m;
    int a[1001] = {0};//初始化全为0
    int max = -999999999;
    int min = 999999999;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        a[m] += 1;//输入相同数字是，对于的位置就会加1，从而实现计数
        if (m<min)
            min = m;
        if (m>max)
            max = m;
    }
    printf("%d %d\n", min,a[min]);
    printf("%d %d\n", max,a[max]);
}