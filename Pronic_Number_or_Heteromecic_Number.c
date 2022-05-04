#include<stdio.h>
int main()
{
    int n,i,j,v=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=i+1;j<=n;j++)
       {
           if(i*j==n && j==i+1)
           {
               v++;
               break;
           }
       }
   }
   if(v==0)
   {
       printf("NO");
   }
   else
   {
       printf("YES");
   }
    
}