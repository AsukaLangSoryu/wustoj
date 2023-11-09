#include<stdio.h>
int runnian(int n);
int main(void)
{
    int mon_1[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int mon_2[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int y_1,m_1,d_1;
    int y_2,m_2,d_2;
    int total=0;
    scanf("%d-%d-%d %d-%d-%d",&y_1,&m_1,&d_1,&y_2,&m_2,&d_2);
    if((y_2-y_1)==0)
    {
        if(runnian(y_1)==1)
        {
            for(int i=m_1;i<m_2;i++)
            {
                total+=mon_2[i];
            }
            total=total-d_1+d_2;
        }
        else if(runnian(y_1)!=1)
        {
            for(int i=m_1;i<m_2;i++)
            {
                total+=mon_1[i];
            }
            total=total-d_1+d_2;
        }
    }
    else if((y_2-y_1)==1)
    {
        if(runnian(y_1)==1)
        {
            for(int i=m_1;i<=12;i++)
            {
                total+=mon_2[i];
            }
            total=total-d_1;
        }
        else if(runnian(y_1)==0)
        {
            for(int i=m_1;i<=12;i++)
            {
                total+=mon_1[i];
            }
            total=total-d_1;
        }
        if(runnian(y_2)==1)
        {
            for(int i=1;i<m_2;i++)
            total+=mon_2[i];
            total=total+d_2;
        }
        else if(runnian(y_2)==0)
        {
            for(int i=1;i<m_2;i++)
            total+=mon_1[i];
            total=total+d_2;
        }
        
    }
    else if((y_2-y_1)>1)
    {
        if(runnian(y_1)==1)
        {
            for(int i=m_1;i<=12;i++)
            {
                total+=mon_2[i];
            }
            total=total-d_1;
        }
        else if(runnian(y_1)!=1)
        {
            for(int i=m_1;i<=12;i++)
            {
                total+=mon_1[i];
            }
            total=total-d_1;
        }
        if(runnian(y_2)==1)
        {
            for(int i=1;i<m_2;i++)
            total+=mon_2[i];
            total=total+d_2;
        }
        else if(runnian(y_2)!=1)
        {
            for(int i=1;i<m_2;i++)
            total+=mon_1[i];
            total=total+d_2;
        }
        for(int i=y_1+1;i<y_2;i++)
        {
            if (runnian(i)==1)
            {
                total+=366;
            }
            else if(runnian(i)==0)
            {
                total+=365;
            }
        }
        
    }
    printf("%d",total);
    return 0;
}

int runnian(int n)
{
    if(n%4==0)
    {
       if(n%100!=0)
        return 1;
        else
        {
            if(n%400==0)
            return 1;
            else
            return 0;
        }  
    }
    else if(n%4!=0)
    return 0;
}