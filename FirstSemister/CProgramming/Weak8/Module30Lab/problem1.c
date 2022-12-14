//Manhatten distance

#include<stdio.h>
#include<stdlib.h>
struct Point
{
    int x;
    int y;
};

int manhatten(struct Point p, struct Point q)
{
    int res = abs(p.x-q.x)+abs(p.y-q.y);
    return res;
}
int main()
{
    struct Point p1,p2;
    scanf("(%d,%d)\n",&p1.x,&p1.y);
    scanf("(%d,%d)",&p2.x,&p2.y);

    int ans = manhatten(p1,p2);
    printf("Manhatten distance is : %d\n",ans);
    return 0;
}