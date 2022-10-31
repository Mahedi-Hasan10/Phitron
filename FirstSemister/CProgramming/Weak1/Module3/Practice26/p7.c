/*
7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height. Go to the editor
Test Data : 135
Expected Output :
The person is Dwarf.
*/
#include<stdio.h>
int main(){
    float perheight;
    printf("Enter the height of a person(Centimeter) : ");
    scanf("%f",&perheight);
    if(perheight<150.0){
        printf("The person is Dwarf.\n");
    }else if(perheight >= 150.0 && perheight <= 165.5){
        printf("The person is average height\n");
    } else if(perheight >= 165.0 && perheight<= 195.0){
        printf("The person is taller\n");
    }else{
        printf("The person is abnormal height\n");
    }
    return 0;
}