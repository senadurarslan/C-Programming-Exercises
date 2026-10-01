#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int BinToDec(long );

int main(int argc, char *argv[]) {
	
	long binnum;
	printf("enter a binary num:");
	scanf("%ld",&binnum);
	printf("%ld\n",BinToDec(binnum));
	return 0;
}

int BinToDec(long bin)
{
	int dec=0,p=1;
	for(; bin>0;dec=dec+(bin%10)*p,bin/=10,p*=2);
	return dec;
}
