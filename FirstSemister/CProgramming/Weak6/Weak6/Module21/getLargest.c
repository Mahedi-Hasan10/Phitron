#include<stdio.h>
int max_number(int x, int y, int z)
{
    int largest;
    if(x>y && x>z)
        largest = x;
    else if(y>x && y>z)
        largest = y;
    else
        largest = z;
    
    return largest;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int m;
    m = max_number(a,b,c);
    printf("Largest number is %d\n",m);
    return 0;
}