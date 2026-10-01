#include <stdio.h>
#include <stdlib.h>

int Findlen(char []);
int main()
{
    char txt[50];
    printf("enter a string:");
    scanf("%s",txt);
   
    printf("The lenght of the %s is %d\n",txt,Findlen(txt));
    
    return 0;
}

int Findlen(char txt[])
{
    int len=0;
    do
    {
        len++;
    } while (txt[len]!='\0');

    return len;
}


