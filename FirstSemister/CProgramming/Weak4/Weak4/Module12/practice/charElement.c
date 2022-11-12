#include<stdio.h>
int main()
{
    char name[] = "Mahedi Hasan";
    int i = 0;
    while(name[i] != '\0')
    {
        printf("%c\n",name[i]);
        i++;
    }


    return 0;
}