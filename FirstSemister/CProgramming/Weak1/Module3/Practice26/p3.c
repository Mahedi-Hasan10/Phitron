/*3. Write a C program to check whether a given number is positive or negative. Go to the editor
Test Data : 15
Expected Output :
15 is a positive number*/
#include<stdio.h>
int main(){
    int a;
    printf("Test Data : ");
    scanf("%d",&a);
    if(a>0){
        printf("%d is an Positive number\n",a);
    }else if(a<0){
        printf("%d is an negative number\n",a);
    }else{
        printf("You entered zero\n");
    }
    return 0;
}