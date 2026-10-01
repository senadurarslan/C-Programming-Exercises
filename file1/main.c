#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[][21]={"How meltind ice","Heartbroken parents","UK will","Body found in search"};
	review(str);
	int i;
	for(i=0;i<4;i++){
		puts(str[i]);
	}
	return 0;
}

void review(char (*P)[21])
{
	int i;
	char temp[100];
	for(i=0;i<4;i++)
	{
		strncpy(temp,*(P+i),2);
		strrev(temp);
		strcpy(*(P+i),temp);
	}
}
