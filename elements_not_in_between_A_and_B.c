#include<stdio.h>
int main()
{
    int n,a[100],i,g,h,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&g,&h);
    for(i=0;i<n;i++)
    {
        if(a[i]<g || a[i]>h )
        {
            c++;
            printf("%d ",a[i]);
        }
        
    }
    if(c==0)
    {
        printf("-1");
    }
}