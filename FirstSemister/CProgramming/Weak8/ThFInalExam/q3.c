#include<stdio.h>
int passByRefrence(int* k)
{
    return *k+5;
}
int main(void){
    int n=10;
    int new_n = passByRefrence(&n);
    printf("%d\n",new_n);
}
In pass by reference, the memory address is passed to that function. 
In other words, the function gets access to the actual variable. 