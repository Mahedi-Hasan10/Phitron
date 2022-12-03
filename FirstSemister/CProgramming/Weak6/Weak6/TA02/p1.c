#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    int i;
    scanf("%s",ch);

    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]+=32;
            continue;
        }
        if(ch[i]>='a' && ch[i] <= 'z')
        {
            ch[i]-=32;
        }

    }
    puts(ch);
    return 0;
}