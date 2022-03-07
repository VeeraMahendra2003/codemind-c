#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len,i;
    scanf("%s",&s[i]);
    len=strlen(s);
    if(len==10)
    {
        if(s[0]=='0')
        {
            printf("Invalid");
        }
        else
        {
            printf("Valid");
        }
    }
    else if(len!=10)
    {
        printf("Invalid");
    }
}