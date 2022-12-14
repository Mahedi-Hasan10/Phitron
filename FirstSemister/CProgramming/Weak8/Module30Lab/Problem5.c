//Complex number add,subtract,multypy..

#include<stdio.h>
struct Comp{
    double real;
    double img;
};
void print_com(struct Comp a)
{
    printf("%0.1lfi + %0.1lfj\n",a.real,a.img);
}
struct Comp add_comp(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real = a.real+b.real;
    ans.img = a.img + b.img;
    return ans;
}

struct Comp multypy_comp(struct Comp m, struct Comp n)
{
    struct Comp result;
    result.real = m.real*n.real-m.img*n.img;
    result.img = m.real*n.img+m.real*n.img;
}
int main()
{
    struct Comp c1 = {3.5,4.5};
    struct Comp c2 = {4.5,5.5};

    print_com(add_comp(c1,c2));
    printf("\n");
    print_com(multypy_comp(c1,c2));
    return 0;
}