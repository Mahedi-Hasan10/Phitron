#include<stdio.h>
struct Course {
    char name[20];
    int price;
};

int main()
{
    struct Course c1 ={"C Programming",5000};
    printf("%s %d",c1.name,c1.price);
    return 0;
}