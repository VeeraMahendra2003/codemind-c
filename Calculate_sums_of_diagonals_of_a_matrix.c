#include<stdio.h>
int main()
{
    int n,a[100][100],i,j,s=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                t=t+a[i][j];
            }
        }
    }
    printf("Secondary Diagonal:%d",t);
}