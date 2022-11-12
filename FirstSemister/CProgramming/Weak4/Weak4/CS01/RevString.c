#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int len=0;
    int i=0,j;
    while(str[i] != '\0')
    {
        i++;
        len++;
    }

    for(i=len-1;i>=0;i--){
        printf("%c ",str[i]);
    }
    
    return 0;
}