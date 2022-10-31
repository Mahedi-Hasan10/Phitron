/*
9. Write a C program to print all the factors of a number taken as input. 
Sample Input 1: 
12 
Sample Output 1: 
The factors of 12 are: 1, 2, 3, 4, 6, 12. 
Sample Input 2: 
39 
Sample Output 2: 
The factors of 39 are: 1, 3, 13, 39. 

*/
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    printf("factors of %d are: ", n);
    for (i = 1; i < n; ++i) {
        if (n % i == 0) {
            printf("%d, ", i);
        }
    }
        printf("%d.", i);
    
    return 0;
}