#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n,min,count,p,x=0;
	scanf("%d",&n);
	min = pow(10,n-1);
	for(i=min;i<min*10;i++)
	{
		count = 0;
		p = i;
		while(p)
		{
			count += pow(p%10,n);
			p /= 10;
		}
		if(count == i)
		{
            x++;
            if(x==1)
			printf("%d",i);
            else
            printf("\n%d",i);
		}
	}
    return 0;
}