#include<stdio.h>
int main()
{
    char sen[1000];
    fgets(sen,sizeof(sen),stdin);
    int count = 0;
    int i=0,counter=0;
    while(sen[i] !='\0')
    {
        if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
            counter++;
        if(sen[i]=='A' || sen[i]=='E' || sen[i]=='I' || sen[i]=='O' || sen[i]=='U')
            counter++;
        i++;
    }
    printf("Number of Vowels :  %d\n",counter);
    return 0;
}