#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i*j==n)
            {
                printf("%d %d",i,j);
                c++;
            }
        }
    }
    if(c==0)
    printf("-1");
}