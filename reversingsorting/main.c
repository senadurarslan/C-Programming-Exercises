#include <stdio.h>
#include <stdlib.h>

void ShowRevStr(char []);
void SortStrDes(char[]);

int main()
{
    char all[50];
    printf("Enter your name:");
    scanf("%s",all);
    ShowRevStr(all);
    printf("\n");
    SortStrDes(all);
    return 0;
}
void ShowRevStr(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
	len++;
	}
    char RevStr[len+1];
    int i=0;
    while (i<len)
    {
        RevStr[i]=str[len-1-i];
        i++;
    }
    RevStr[i]='\0';
    printf("reversed string:%s\n",RevStr);
}
void SortStrDes(char str[])
{
    int i,j,temp,len=0;
    for ( ; str[len]!='\0'; len++);
	        for ( i = 0; i < len; i++)
        {
            for ( j = i+1; j < len; j++)
            {
                if(str[i]<str[j])
                {
                    temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                }
            }
            
        }
    
 printf("Sorted string in desconding order:%s\n",str);
}
