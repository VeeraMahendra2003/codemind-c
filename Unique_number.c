#include<stdio.h>
int main()
{
    int n,t,d,a[100],j,k,i,c=0;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        d=t%10;
        a[j]=d;
        j++;
        t=t/10;
    }
    for(i=0;i<j;i++)
    {
        for(k=0;k<j;k++)
        {
            if(a[i]==a[k])
            {
                c++;
            }
        }
    }
    if(c==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
    
}