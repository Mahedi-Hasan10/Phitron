//Structure array of Students in a class
#include<stdio.h>
struct Student{
    int Roll;
    char Name[30];
    double marks;
};

void printStudentInfo(int n, struct Student s)
{
    printf("Information of the Student No %d\n",n);
    printf("Roll -> %d\n",s.Roll);
    printf("Name -> %s\n",s.Name);
    printf("Mark -> %0.2lf\n",s.marks);
}
int main(void)
{
    struct Student cls[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&cls[i].Roll);
        scanf("%s",cls[i].Name);
        scanf("%lf",&cls[i].marks);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        if(cls[i].Roll%2==0)
            printStudentInfo(i,cls[i]);
    }

    return 0;
}

/*

438820 Mahedi 20.5
438803 Jesan 22.5
438880 Sojib 30.5
438883 Imran 35.5
438852 Redwan 40.5

*/
