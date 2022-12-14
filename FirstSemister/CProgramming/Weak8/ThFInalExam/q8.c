#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[30];
    int marks;
};
int main(void)
{
    struct Student s1;
    printf("Enter information :\n");
    printf("Enter name: ");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter marks: ");
    scanf("%d",&s1.marks);
    printf("Name : %s",s1.name);
    printf("Roll number: %d\nMarks : %d\n",s1.roll,s1.marks);
    return 0;
}


