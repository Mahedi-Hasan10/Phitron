#include<stdio.h>
int mySum(int x, int y)
{
    int z = x + y;
    return z;

}

int mySub(int m, int n)
{
    int s = m - n;
    return s;
}
int main()
{
    int a,b,sum;
    printf("Enter two numbers you want to addition : ");
    scanf("%d %d",&a,&b);
    sum = mySum(a,b);

    int k,l,sub;
    printf("Enter two numbers you want to Substract : ");
    scanf("%d %d",&k,&l);
    sub = mySub(k,l);

    printf("Addition is = %d\n",sum);
    printf("Substraction is = %d\n",sub);

    
    return 0;
}