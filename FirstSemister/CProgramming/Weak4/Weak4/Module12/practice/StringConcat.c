#include<stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Mahedi Hasan\n";
    char str2[] = "Programmer";

    //With Concat Function.......
    // strcat(str1,str2);
    // puts(str1);

    //Without Concat function....
    int i = 0,len =0,j=0;
    while(str1[i] != '\0')
    {
        len++;
        i++;
    }
    while(str2[j] != '\0')
    {
        str1[len+j] = str2[j];
        j++;
    }
    puts(str1);
    
    



    return 0;
}