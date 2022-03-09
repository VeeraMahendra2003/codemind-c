#include<stdio.h>
int main()
{
    long int i,n,a[1010],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(n>=1&&n<=10)
        {
            s=s+a[i];
        }
    }
    printf("%ld",s);
}