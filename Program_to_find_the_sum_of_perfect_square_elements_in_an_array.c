#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,t,m,s=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        m=sqrt(t);
        r=m*m;
        if(r==a[i])
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
    
}