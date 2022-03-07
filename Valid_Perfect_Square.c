#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,i,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        s=pow(n,0.5);
        if(s*s==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}