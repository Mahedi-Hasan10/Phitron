#include<stdio.h>
#include<math.h>
int main()
{
    // int a,b,c,s,m,d,r;
    // a = 7;
    // b = 5;
    // c = a + b;
    // s = a - b;
    // m = a * b;
    // d = a / b;
    // r = a % b;
    // printf("Summation = %d\nSubtraction = %d\nProduct = %d\nDivision = %d\nReminder = %d\n",c,s,m,d,r);


    //Some math function
    // int power;
    // power = pow(5,2);
    // printf("\nPower = %d\n",power);

    // float squireRoot;
    // squireRoot = sqrt(25);
    // printf("squire Root = %f\n",squireRoot);


    //Area of a triangle Using sqrt function
    int x,y,z;
    printf("Enter three side of a triangle : \n");
    scanf("%d %d %d",&x,&y,&z);
    float s;
    s = (x+y+z)/2.0;

    double area;
    area = sqrt(s*(s-x)*(s-y)*(s-z));
    printf("Area of the triangle is = %lf\n",area);


    return 0;
}