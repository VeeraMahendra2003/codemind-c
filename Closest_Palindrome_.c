#include<stdio.h>
int main()
{
    int n,i,s=0,t=0,a,b,d,x,p;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        x=i;
        s=0;
        while(x)
        {
            d=x%10;
            s=(s*10)+d;
            x=x/10;
            
        }
        if(s==i)
        {
            a=i;
            break;
        }
    }
    for(i=n+1;;i++)
    {
        p=i;
        t=0;
        while(p!=0)
        {
            d=p%10;
            t=(t*10)+d;
            p=p/10;
        }
        if(t==i)
        {
            b=i;
            break;
        }
    }
    if(n-a==b-n)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d",a);
    }
}