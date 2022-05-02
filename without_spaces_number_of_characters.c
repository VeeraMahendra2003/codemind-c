#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,s=0,t;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c++;
        if(str[i]==' ')
        {
            s++;
        }
    }
    t=c-s;
    printf("%d",t);
}