#include<stdio.h>
int main()
{
    int n,a[100],i,k,c=0,j,t,s=0,v=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        c=0;
        for(j=1;j<=t;j++)
        {
            if(t%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            s=s+a[i];
            v++;
        }
    }
    avg=(float)s/v;
    printf("%.2f",avg);

}