//Get middle point...

#include<stdio.h>
struct Point
{
    float x;
    float y;

};
struct Point mid(struct Point m,struct Point n)
{
    struct Point ans;
    ans.x = (m.x+n.x)/2;
    ans.y = (m.y+n.y)/2;
    return ans;
}
int main(void)
{
    struct Point p1;
    struct Point p2;
    scanf("(%f,%f)\n",&p1.x,&p1.y);
    scanf("(%f,%f)",&p2.x,&p2.y);

    struct Point p3;
    p3 = mid(p1,p2);

    printf("Mid point : (%0.2f,%0.2f)\n",p3.x,p3.y);
    return 0;
}