#include<stdio.h>
#include <string.h>
int main()
{
    char source[] = "Mahedi Hasan";
    char target[20];
    //String Copyy using library function...
    strcpy(target,source);
    puts(source);
    puts(target);



    return 0;
}