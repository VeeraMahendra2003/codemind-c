#include<stdio.h>
int main()
{
    char str[100];
    int i,max;
    scanf("%[^
]s",str);
    max=str[0];
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    printf("%c",max);
}