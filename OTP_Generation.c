#include<stdio.h>
int main()
{
    int n,i,t,d,a[100],j;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        d=t%10;
        if(d%2!=0)
        {
            a[i]=d;
            i++;
        }
        t=t/10;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]*a[j]);
    }
}