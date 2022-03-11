#include<stdio.h>
int main()
{
    int i,r1,r2,d,s=0,temp;
    scanf("%d%d",&r1,&r2);
    for(i=r1;i<=r2;i++)
    {
        s=0;
        temp=i;
        while(temp)
        {
            d=temp%10;
            s=(s*10)+d;
            temp=temp/10;
            
        }
        if(s==i)
        {
            printf("%d ",i);
        }
    }
    
}