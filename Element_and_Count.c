#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
           if(a[i]==a[j]) 
           {
               c++;
               a[j]=-1;
           }
           else
           {
               continue;
           }
        }
        if(a[i]!=-1)
        {
            printf("%d %d ",a[i],c);
        }
    }
}