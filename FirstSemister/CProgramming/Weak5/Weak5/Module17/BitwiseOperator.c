#include<stdio.h>
int main()
{
    //bitwise operator....
    int a,b,c;
    a = 5;
    b = 7;
    c = a&b;
    printf("%d\n",c);
    c = a|b;
    printf("%d\n",c);
    c = ~a;
    printf("%d\n",c);


    //Left Sheft and Right sheft operator.
    c = a<<2;
    printf("%d\n",c);
    c = a>>2;
    printf("%d\n",c);

    return 0;
}