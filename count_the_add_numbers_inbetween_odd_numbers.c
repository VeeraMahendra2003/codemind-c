#include<stdio.h>
int main()
{
    int n,a[100],i,k1,k2,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i-1]%2!=0 && a[i+1]%2!=0)
        {
            if(a[i]%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    
}