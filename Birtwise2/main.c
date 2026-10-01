#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned char hexarr[4][9];
    long int bin,dec,pw;
	int i=0;
	for(; i<4;i++){
		printf("enter a bin num:");
		scanf("%ld",&bin);
		for(dec=0,pw=1;bin>0;dec=dec+(bin%10)*pw,pw*=2,bin/=10);
		sprintf(hexarr[i],"%X",dec);
	}
	for(i=0;i<4;i++) printf("%s ",hexarr[i]);
	return 0;
}
