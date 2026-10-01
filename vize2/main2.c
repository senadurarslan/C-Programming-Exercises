#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Revise(char *p);

int main(int argc, char *argv[]) {
	char str[]="The Legend of Sleepy Hallow";
	Revise (str);
	printf("%s",str);
	return 0;
}

void Revise(char *P){
	int x=27;
	for(; *(++P)!='\0'; *P=*(P+x), x--);
}
