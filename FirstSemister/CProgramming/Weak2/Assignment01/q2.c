/*
You need to take 4 distinct integer as input. Print the largest and smallest among them. Distinct means all of them are separate integers. None of them is equal to any other of them. 
Sample Input: 
123 435 34 612 
Sample Output: 
Largest = 612 
Smallest = 34 

*/

#include<stdio.h>
int main(){
    int a,b,c,d,l,s;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    //get largest....
    if(a>b && a>c && a>d)
        l = a;
    else if(b>a && b>c && b>d)
        l = b;
    else if(c>a && c>b && c>d)
        l = c;
    else
        l = d;
    //get Smallest..
    if(a<b && a<c && a<d)
        s = a;
    else if(b<a && b<c && b<d)
        s = b;
    else if(c<a && c<b && c<d)
        s = c;
    else
        s = d;
    printf("Largest = %d\n",l);
    printf("Smallest = %d\n",s);

    return 0;
}