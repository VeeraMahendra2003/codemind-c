#include<stdio.h>
int main()
{
    char str[100];
    int i,p,s;
    scanf("%[^
]s",str);
    scanf("%d%d",&p,&s);
    for(i=p;i<=s;i++)
    {
        printf("%c",str[i]);
    }
    
}