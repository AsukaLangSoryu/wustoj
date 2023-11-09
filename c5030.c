#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    int five,two,one,count=0;
    for(five=x/5;five>=1;five--) 
    {
        for(two=x/2;two>=1;two--) 
        {
            for(one=x;one>=1;one--) 
            {
                if(five*5+two*2+one==x) 
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",five,two,one,five+two+one);
                    count++;
                }
            }
        }
    }
    printf("count = %d",count);
    return 0;
}