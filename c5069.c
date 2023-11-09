#include<stdio.h>
int runnian(int year);
int main(void)
{
    int y,m,d;
    int y_,m_,d_;
    scanf("%d %d %d",&y,&m,&d);
    int mon_1[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int mon_2[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int total=0;
    for(int i=m;i<=12;i++)
    {
        total+=runnian(i)?mon_2[i]:mon_1[i];
    }
    total-=d;
    for(y_=y+1;total<10000;y_++)
    {
        total+=runnian(y_)?366:365;
    }
    y_--;
    total-=runnian(y_)?366:365;
    for(m_=1;total<10000;m_++)
    {
       total+=runnian(y_)?mon_2[m_]:mon_1[m_];
    }
    m_--;
    total-=runnian(y_)?mon_2[m_]:mon_1[m_];
    d_=10000-total;
    printf("%d-%d-%d",y_,m_,d_);
    return 0;    
}

int runnian(int year) 
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}