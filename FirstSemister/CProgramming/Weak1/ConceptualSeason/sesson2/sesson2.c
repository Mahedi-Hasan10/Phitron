/*
 Mr A has a great that has N rows and M columns. Each row is numberred from 1 to N from top to bottom. Each colum is numberred from 1 to M from left to right.

Each tile in the great contains a number .the number are arranged as follows.
Row 1 contains integer from 1 to M from left to right.
Row 2 contains integers from M+1 to 2*M from left to right.
Row 3 contains integers from 2*M+1 to 3*M from left to right.
And so on until row N .

A Domino is defined as two different tiles in the grid that touch by their sides. A Domino is said to be tight if and only if the two numbers in the Domino have a difference of exactly 1. Count the number of distinct tide dominos in the Grid.

To Domino's are said to be distinct if and only if there exists at last one tile that is in one Domino but not in the other.

The range of the M,N->1-100
Write to

*/
#include <stdio.h>
int main()
{
    int n,m,ans;
    scanf("%d%d",&m,&n);
    if(m==1 && n==1)
        ans = 0;
    else if(m==1 && n>1)
        ans = n-1;
    else if(n==0 && m>1)
        ans = m-1;
    else
        ans = (m-1) * n;
    printf("%d\n",ans);
    
    return 0;
}