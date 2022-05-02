#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,s=0,t;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            s++;
        }
    }
    printf("%d",s);
}