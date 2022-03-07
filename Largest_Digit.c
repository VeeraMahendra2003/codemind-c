#include<stdio.h>
int main()
{
    int n,d,v[100],k,j,c=0,max;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        v[k]=d;
        n=n/10;
        k++;
        c++;
    }
    j=k;
    max=0;
    for(j=0;j<c;j++)
    {
       if(v[j]>max)
       {
           max=v[j];
       }
    }
    printf("%d",max);
}