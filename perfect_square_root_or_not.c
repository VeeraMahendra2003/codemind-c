#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,s;
    scanf("%d",&n);
    t=sqrt(n);
    if(n>0)
    {
        s=t*t;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}