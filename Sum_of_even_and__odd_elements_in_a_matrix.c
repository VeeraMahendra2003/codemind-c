#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,s=0,k=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                s=s+a[i][j];
            }
            else if(a[i][j]%2!=0)
            {
                k=k+a[i][j];
            }
        }
    }
    printf("%d %d",s,k);
}