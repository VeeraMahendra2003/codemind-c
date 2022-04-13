#include<stdio.h>
int main()
{
    int n,d,a[100],i,j,max;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        a[i]=d;
        n=n/10;
        i++;
    }
    max=0;
    for(j=0;j<i;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
    }
    printf("%d",max);
}