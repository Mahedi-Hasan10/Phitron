#include<stdio.h>
#include<string.h>
int main()
{
    char name[] = "Mahedi Hasan";
    //Get length of the string
    int a = strlen(name);
    printf("%d\n",a);

    //Copy a string
    char copyString[20];
    strcpy(copyString,name);
    puts(copyString);

    //Compare two string
    char str1[] = " Md Mahedi Hasan";
    int compareString = strcmp(name,str1);
    printf("%d\n",compareString);

    //Concat two string
    strcat(name,str1);
    puts(name);





    return 0;
}