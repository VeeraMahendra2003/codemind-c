#include<stdio.h>
int main()
{
    int i,j,n,n1;
    scanf("%d",&n);
    n1=1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||j==n1)
            {
                printf("%d ",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
        n1++;
    }
}