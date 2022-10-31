/*
Write a C program to take two integer as input and show who is bigger. If they are equal
print as it is. see the sample input and output for more clarification
Sample input                    Sample Output
5 10 4                             B is bigger
10 2 5                             A s bigger
4  4 7                             c s bigger
10 10 10                           They are equal
*/
#include<stdio.h>
int main(){
     int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    // if(a>b && a>c){
    //     printf("A is bigger\n");
    // }
    // else if(b>a && b>c){
    //     printf("B is bigger\n");
    // }
    // else if(c>a && c>b){
    //     printf("C is bigger\n");
    // }
    // else{
    //     printf("They are equal\n");
    // }

    //bonus task
   
     return 0;
}