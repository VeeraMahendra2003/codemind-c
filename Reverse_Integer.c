#include<stdio.h>
int main()
{
    int n,s=0,d;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=(s*10)+d;
        n=n/10;
    }
    printf("%d",s);
    
}