#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0;
    int a,b;
    char ss[21];
    scanf("%s",&ss);
    scanf("%d %d",&a,&b);
    int l = strlen(ss);

    for(int i=0; i<l; i++)
    {
        if(ss[i]=='+')
        {
            sum = sum + (a+b);
        }
        else if(ss[i]=='*')
        {
            sum = sum + (a*b);
        }

    }

    printf("%d",sum);

}