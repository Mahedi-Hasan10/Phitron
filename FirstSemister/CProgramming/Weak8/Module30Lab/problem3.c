//Centered point of a triangle..
#include<stdio.h>
struct Point{
    float x;
    float y;
};

struct Triangle{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point centered(struct Triangle t)
{
    struct Point ans;
    ans.x = (t.A.x+t.B.x+t.C.x)/3;
    ans.y = (t.A.y+t.B.y+t.C.y)/3;

    return ans;
}
int main(void)
{
    struct Point P1 = {1,1};
    struct Point P2 = {4,5};
    struct Point P3 = {1,5};

    struct Triangle t = {P1,P2,P3};

    struct Point c = centered(t);

    printf("Centered is : (%0.2f, %0.2f)\n",c.x,c.y);

    return 0;
}