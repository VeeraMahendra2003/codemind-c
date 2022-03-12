#include<stdio.h>
#include<math.h>
int main()
{
    int r1,r2,i,c=0,k=0,j;
    scanf("%d%d",&r1,&r2);
    for(i=r1;i<=r2;i++)
    {
        if(i==1)
        continue;
        c=0;
        for(j=2;j<=sqrt(i);j++)
        {
        if(i%j==0)
        {
            c++;
        }
        }
        if(c==0)
        {
          k++;
        }
        
  }
  printf("%d",k);
    
}