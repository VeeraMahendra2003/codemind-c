#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0,k=0,s=0,j=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            c++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            k++;
        }
        else if(str[i]==' ')
        {
            s++;
        }
        else
        {
            j++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",c,j,k,s);
}