/*
There are three cards on the desk, ease with a positive integer written on it. The integer on the cards are A,B and C. You have to chosen two cards and picked them up. Find the maximum possible sum of the integers written on the picked cards.

The range of A,B,C->1-100

SAMPLE INPUT:-
3 4 5
6 6 6
99 99 98

SAMPLE OUTPUT:-
9
12
198
*/
#include <stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    if(a<b && a<c)
        sum-=a;
    else if(b<a && b<c)
        sum-=b;
    else
        sum-=c;
    printf("%d\n",sum);
    return 0;
}