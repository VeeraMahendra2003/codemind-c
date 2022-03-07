#include<stdio.h>
int main()
{
    int t,n,i,j,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        p=0;
        scanf("%d",&n);
        p=1;
        for(j=1;j<=n;j++)
        {
            p=p*j;
        }
        printf("%d
",p);
    }
    
}