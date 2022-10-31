/*
Programming Hero headquarters  has N floors, called the 1-st floor through the N-th floor. Each floor has K rooms, called the 1-st room through the K-th room.

Here, both N and K are one-digit integers, and the j-th room on the i-th floor has the room number i0j. For example, the 2-nd room on the 1-st floor has room number 102.
Now you are interested in the sum of the room numbers of all rooms of the Programming Hero headquarters, where each room number is seen as a three-digit integer. Find this sum.

Range of N and K -> 1-9
Sample Input-
1 2
3 3

Sample Output -
203
1818

*/
#include<stdio.h>
int main(){
    int i,n,k,nextRoom=101, nextFloor=2,ans=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=(n*k);i++){
        ans+=nextRoom;
        nextRoom+=1;
        if(i%k==0){
            nextRoom =(100*nextFloor)+1;
            nextFloor+=1;
        }
    }
    printf("%d",ans);
    return 0;
}