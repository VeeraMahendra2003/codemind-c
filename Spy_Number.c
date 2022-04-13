#include<stdio.h>
int main()
{
    int n,temp,s=0,p=1,d;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    n=temp;
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}