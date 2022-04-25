#include<stdio.h>
int main()
{
    int n,a[100],i,k,c=0,j,t,v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        t=a[i];
        for(j=1;j<=t;j++)
        {
        if(t%j==0)
        {
            c++;
        }
        }
    if(c==2 && a[i]<=k)
    {
        v++;
    }
    }
    printf("%d",v);
}