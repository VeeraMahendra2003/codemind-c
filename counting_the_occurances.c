#include<stdio.h>
int main()
{
    char str[1000];
    int i,c=0;
    char ch,n;
    scanf("%[^
]s",str);
    scanf("%c",&n);
    scanf("%c",&ch);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}