#include<stdio.h>
int main()
{
    int n,i,a[10000],j=0,k,s=0,c=0,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a[j]=i;
            j++;
        }
    }
    z=j;
    for(j=0;j<z;j++)
    {
        c=0;
        for(i=1;i<=a[j];i++)
        {
            if(a[j]%i==0)
            {
                c++;
            }
        }
        if(c!=2)
        {
            s++;
        }
    }
    printf("%d",s);
 
}