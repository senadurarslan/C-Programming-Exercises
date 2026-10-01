#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int code=65;
	char ch;
	printf("%s %s\n","ASCIICODE","CHARACTER");
	for(; code<91;code++)
	{
	   ch=(char)code;
	   printf("%5d%10c\n",code,ch);	
	}
	return 0;
}
