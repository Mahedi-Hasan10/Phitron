#include<stdio.h>
int main()
{
    char name[15]= {"Mahedi Hasan"};
    name[12] = 'N';
    name[13] = '\0';

    printf("My name is %s",name);
    
    return 0;
}