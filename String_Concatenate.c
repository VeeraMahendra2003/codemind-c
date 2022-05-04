#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    int i,j,t;
    scanf("%[^
]s",s);
    scanf(" %[^
]s",s1);
    strcat(s,s1);
    for(i=0;s[i]!=NULL;i++)
    {
        for(j=i+1;s[j]!=NULL;j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(i=0;s[i]!=NULL;i++)
    {
        printf("%c",s[i]);
    }
}