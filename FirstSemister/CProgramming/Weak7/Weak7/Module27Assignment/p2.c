#include<stdio.h>
#include<string.h>

void my_sort(char c[100]);

int main(void)
{
    char c[100];
    gets(c,strlen(c),stdin);
    my_sort(c);
}
void my_sort(char c[100])
{
    char temp;
    int i,j,len;
    len = strlen(c);
    for(i=0;i<len;i++)
    {
        for(j=0;j<(len-1);j++)
        {
            if(c[j]<c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    puts(c);
}
