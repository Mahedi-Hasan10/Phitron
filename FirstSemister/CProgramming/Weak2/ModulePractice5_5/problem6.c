/*
Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours format). You need to print from N to M, if you need to start from beginning again, you can do that. See the sample input output for more clarification.


Sample Input:   Sample Output:
5 12            5 6 7 8 9 10 11 12
21 7            21 22 23 0 1 2 3 4 5 6 7
*/
#include<stdio.h>
int main(){
 int n, m;
    scanf("%d %d", &n, &m);
    // while (n != m)
    // {
    //     if (n == 24)
    //         n = 0;
    //     printf("%d ", n);
    //     n++;
    // }
    // printf("%d ", n);

    while(n!=m){
        if(n==24)
            n = 0;
        printf("%d ",n);
        n++;
    }
    printf("%d ", n);

    return 0;
}