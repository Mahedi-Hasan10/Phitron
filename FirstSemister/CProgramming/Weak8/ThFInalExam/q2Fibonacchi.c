#include<stdio.h>    
void fibonacchi(int n);

int main(void)    
{    
  int n;
  scanf("%d",&n);
  fibonacchi(n);
  return 0;  
}    

void fibonacchi(int n)
{
    int n1=0,n2=1,n3,i;     
    printf("\n%d %d",n1,n2);
    for(i=2;i<n;++i)
    {    
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    } 
}

/*
steps:
1. take a integer number input as n and pass the value in a function ;

2. 

3. 

*/
