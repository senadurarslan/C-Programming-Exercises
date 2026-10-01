#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char binarr[][5]={"1011","0011","1110","1111"};
	BinToDec(binarr);
	int i=0;
	for(; i<4; i++)
	{
		puts(binarr[i]);
	}
	return 0;
}
/*
void BinToDec(char (*P)[5])
{
	char *end;
	int i;
	i=0;
	while(i<4){
		sprintf(*(P+i),"%d",strtol(*(P+i),&end,2));
		i++;
	}
}
*/
void BinToDec(char (*P)[5])
{
	char *end;
	int i,pw,bin,dec;
	i=0;
	while(i<4){
		bin=atoi(*(P+i));
		for(dec=0,pw=1; bin>0;dec=dec+(bin%10)*pw,pw*=2,bin/=10);
		sprintf(*(P+i),"%d",dec);
		i++;
	}
}
