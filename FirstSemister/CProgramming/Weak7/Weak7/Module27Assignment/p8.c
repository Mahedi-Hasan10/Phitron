#include<stdio.h>
#include<string.h>
int broken_keyboard(char str[], int n);

int main(void)
{
    char str[104];
    scanf("%s",&str);
    int n;
    n = strlen(str);
    broken_keyboard(str,n);
    return 0;
}


int broken_keyboard(char str[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(str[i+1]%2 == 0 )
            printf("%c%c",str[i],str[i]);
        else if(str[i+1] != 0)
            printf("%c",str[i]);
    }
    printf("\n");
}
