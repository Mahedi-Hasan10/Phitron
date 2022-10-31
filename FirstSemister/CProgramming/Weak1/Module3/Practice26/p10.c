/*
10. Write a C program to find the eligibility of admission for a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
*/
#include<stdio.h>
int main(){
    int math,phy,chem,total_marks_of_all_subjects,total_marks_of_math_and_phy;
    printf("Input the marks obtained in Mathematics :");
    scanf("%d",&math);
    printf("Input the marks obtained in Physics :");
    scanf("%d",&phy);
    printf("Input the marks obtained in Chemistry :");
    scanf("%d",&chem);
    if(math >= 65 && phy >=55 && chem >= 50){
        total_marks_of_all_subjects = math+phy+chem;
        total_marks_of_math_and_phy = math + phy;
        if(total_marks_of_all_subjects >= 190 && total_marks_of_math_and_phy >=140){
             printf("The candidate is eligible for admission.\n");
        }else{
            printf("The candidate is not eligible for admission.\n");
        }
    }else{
        printf("The candidate is not eligible for admission.\n");
    }
    return 0;
}