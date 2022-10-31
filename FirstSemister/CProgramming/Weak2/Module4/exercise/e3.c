/*
3.Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Test Data : ");
    scanf("%d",&n);
    printf("The first 7 natural number is :\n");
    for(i=1;i<=n;i++){
        printf("%d ",i);
        sum+=i;
    }
    printf("\nThe Sum of Natural Number upto %d terms : %d\n",n,sum);
    return 0;
}