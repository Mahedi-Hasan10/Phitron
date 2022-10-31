/*
Write a C program to take two integer as input and show who is bigger. If they are equal
print as it is. see the sample input and output for more clarification
Sample input                    Sample Output
5 10                               B is bigger
10 2                               A s bigger
4  4                              They are equal
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("A is bigger\n");
    }else if(b>a){
        printf("B is bigger\n");
    }else{
        printf("They are equal\n");
    }
    return 0;
}