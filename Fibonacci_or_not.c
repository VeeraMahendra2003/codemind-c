#include<stdio.h>
void fibo(int n)
{
    int a=0,b=1,c,i,v=0;
    c=a+b;
    for(i=3;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        if(c==n)
        {
            v++;
            break;
        }
    }
    if(v>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    fibo(n);
}