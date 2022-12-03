#include <stdio.h>

int is_vowel(int x)
{
    if(x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    ch = getchar();
    getchar();
    if(is_vowel(ch)==1)
        printf("This charecter is vowel.\n");
    else
        printf("This charecter is consonant.\n");

    return 0;
}