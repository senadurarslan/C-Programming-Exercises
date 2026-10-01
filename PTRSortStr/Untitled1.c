#include <stdio.h>
#include <stdlib.h>

//Kullanýcýdan bir string (kelime) alýp, bu string’i azalan sýraya göre karakterlerine göre sýralamak.

void SortStr(char *);
int main(int argc, char *argv[]){
	
	char str[50];
	printf("Enter a string: ");
	scanf("%s",str);
	SortStr(str);
	printf("%s",str);
	
	return 0;
}

void SortStr(char *p){
	int i,j;
	char temp=NULL;
	i=0;
	while(*(p+i)!='\0')
	{
		j=i+1;
		while(*(p+j)!=NULL)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
			j++;
		}
		i++;
	}
}
