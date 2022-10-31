#include<stdio.h>
int main(){
    int p1,p2,p3,p4,win1,win2,ans;
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    if(p1>p2)
        win1 = p1;
    else
        win1 = p2;
    if(p3>p4)
        win2 = p3;
    else
        win2 = p4;
        
    if((win1>p3 || win1>p4) && (win2>p1 || win2>p2))
        printf("Yes");
    else
        printf("No");
    return 0;
}