#include<stdio.h>
int main()
{
    int n,m,i,t,d,c=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        t=i;
        c=0;
        while(t)
        {
            d=t%10;
            if(d==0||i%d!=0)
            {
                c++;
            }
            t=t/10;
        }
        if(c==0)
        {
            printf("%d ",i);
        }
    }
}