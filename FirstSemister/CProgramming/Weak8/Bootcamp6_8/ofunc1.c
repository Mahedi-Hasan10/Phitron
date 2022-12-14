#include<stdio.h>
double pi()
{
    return 3.14159;
}
int makeDouble(int n)
{
    return n*2;
}

void happy()
{
    printf("Heheheh\n");
}

void vengabe(char name)
{
    printf("%c hehehe...\n",name);
}

int main(void){
    int n=10;
    printf("Double is : %d\n",makeDouble(n));
    happy();
    vengabe('x');
    vengabe('b');
    printf("%.5lf\n",pi());
}