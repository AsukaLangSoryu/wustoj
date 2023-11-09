#include<stdio.h>
int main(void)
{
    int score;
    scanf("%d",&score);
    if(score>=90&&score<=100)
    printf("score=%d,grade:A",score);
    else if(score>=80&&score<90)
    printf("score=%d,grade:B",score);
    else if(score>=70&&score<80)
    printf("score=%d,grade:C",score);
    else if(score>=60&&score<70)
    printf("score=%d,grade:D",score);
    else if(score<60)
    printf("score=%d,grade:E",score);
    return 0;


}