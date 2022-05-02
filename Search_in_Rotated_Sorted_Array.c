#include<stdio.h>
int main()
{
    int n,a[100],i,k,s,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
            break;
        }
    }
    if(c>0)
    {
        printf("%d",i);
    }
    else
    {
        printf("-1");
    }
}