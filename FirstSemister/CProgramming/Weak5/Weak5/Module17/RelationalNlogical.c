#include<stdio.h>
int main()
{
    //Relation and Logical Operation
    int n;
    scanf("%d",&n);
    if(n%3==0 && n%10==5)
    {
        printf("Beautiful\n");
    }else
        printf("Not Beautiful\n");

    return 0;
}