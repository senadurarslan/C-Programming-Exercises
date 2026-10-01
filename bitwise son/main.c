#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,count,ms,i,bit;
	bit=8;
	num=6;
	count=0;
	ms=1<<(bit-1);
	for(i=0;i<bit;i++)
	{
		if((num<<i)&ms)break;
		count++;
	}
	printf(	"Total number in % is %d",num,count);
	return 0;
}
