#include<stdio.h>
#include<string.h>
int main(){
   
    char name[100];
    printf("Enter your fullname : ");
    fgets(name,sizeof(name),stdin);
    printf("Your fullname is : %s",&name);
    //puts(name);
    return 0;
}