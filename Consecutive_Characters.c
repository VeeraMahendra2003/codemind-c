#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,max;
    scanf("%[^
]s",str);
    max=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==str[i+1])
        {
            c++;
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=0;
        }
    }
    printf("%d",max+1);
    
}