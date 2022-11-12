
// C implementation to check if a given
// string is palindrome or not
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = { "madam" };
 
    // Start from leftmost and
    // rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters
    // while they are same
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("NOT");
            return 0;
            // will return from here
        }
    }
 
    printf("YES");
 
    return 0;
}