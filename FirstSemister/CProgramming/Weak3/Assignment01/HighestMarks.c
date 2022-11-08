#include<stdio.h>
int main(){
    int highestMark,n,i;
    scanf("%d",&n);
    int marks[101];
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }    
    highestMark = marks[0];
    for(i=0;i<n;i++){
        if(marks[i] > highestMark)
            highestMark = marks[i];
    }
    int need;
    for(i=0;i<n;i++){
        need = highestMark - marks[i];
        printf("%d ",need);
    }
    return 0;
}



    
