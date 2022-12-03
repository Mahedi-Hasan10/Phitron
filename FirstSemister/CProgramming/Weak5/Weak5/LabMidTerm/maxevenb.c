#include<stdio.h>
#include<string.h>
int main()
{
    int n,coun=1,maxx=1;
    scanf("%d",&n);
    char s[101];
    scanf("%s",s);
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            coun++;
        }
        else
        {
            coun=1;
        }

        if(maxx<=coun)
        {
            maxx = coun;
        }
    }
    printf("%d",maxx);
}