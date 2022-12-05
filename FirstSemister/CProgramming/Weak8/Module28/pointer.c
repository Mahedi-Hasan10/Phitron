#include<stdio.h>
void func(int x, int y, int* r, int* s)
{
    *r = x>y?x:y;
    *s = x<y?x:y;
}
int main()
{
    int a=25,b=10,large,small;
    func(a,b,&large,&small);
    printf("Largest is = %d, Smallest = %d,\n",large,small);
    
    return 0;
}