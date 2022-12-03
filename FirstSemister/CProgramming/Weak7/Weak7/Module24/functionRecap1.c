#include<stdio.h>
int take_radius()
{
    int r;
    printf("Enter the size of the radius : ");
    scanf("%d",&r);
    return r;
}
float areaofCircle(int radius)
{
    float ans = 3.14169*radius*radius;
    printf("Area is %f\n",ans);
}

int main()
{
    int r = take_radius();
    areaofCircle(r);
}