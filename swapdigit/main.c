#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int SwapFLDigit();

int main(int argc, char *argv[]) {
	int num;
	printf("enter a num:"); scanf("%d",&num);
	printf("%d\n",SwapFLDigit(num));
	
	return 0;
}


int SwapFLDigit(int N)
{
   int fdig,ldig,rewnum=0,p=1;
   ldig=N%10;
   N/=10;
   for(; N>10;rewnum+=(N%10)*p,p*=10 ,N/=10);	
   fdig=N;
   rewnum=rewnum*10+fdig+ldig*10*p;
   return rewnum;
}

