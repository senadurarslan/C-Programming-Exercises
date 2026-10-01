#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char word[]="arara";
	show(word,0);
	return 0;
}

void show(char *p,int i){
	int len=strlen(p)-(i+1);
	if(*(p+i)==*(p+len))
	{
		if(i+1 == len || i==len)
		{
			p++;
			printf("%s\n",p);
		}
		show(p,i+1);
	}
}

