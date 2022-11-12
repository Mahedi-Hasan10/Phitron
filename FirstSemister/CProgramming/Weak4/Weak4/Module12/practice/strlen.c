#include<stdio.h>
int main()
{
    char name[] = "Mahedi Hasan";
    int i=0,count=0;
    while(name[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d",count);

    return 0;
}