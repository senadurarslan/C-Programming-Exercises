#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N=10, sum=0;
	while(N>0)
	{
		if(N%2==1)
		{
			sum+=N;	printf("Sum=%d\n",sum);
	    if(N==0) break;
		}
		N--;
	
	}
	return 0;
}
