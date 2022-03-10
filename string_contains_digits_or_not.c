#include<stdio.h>
int main()
{
    int t,i,j;
    char str[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",str);
        int c=0;
        for(j=0;str[j]!=NULL;j++)
         {
            if(str[j]>='0'&&str[j]<='9')
            {
                c++;
            }
           // printf("%d",c);
        }
       
        if(c>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}