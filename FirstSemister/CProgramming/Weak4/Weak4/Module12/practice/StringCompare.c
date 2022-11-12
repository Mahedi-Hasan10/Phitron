#include<stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Mahedi Hasan";
    char str2[] = "Mahedi Hasan";
    int d = strcmp(str1,str2);
    if(d==0)
        printf("Equal\n");
    else
        printf("Not equal\n");



    return 0;
}