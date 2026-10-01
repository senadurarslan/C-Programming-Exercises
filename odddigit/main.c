#include <stdio.h>
#include <stdlib.h>

#define findodd(n) ((n%2==1)?n:0)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,sum=0;
	printf("enter a num:");
	scanf("%d",&num);
	
	do{
		sum+=findodd(num%10);
		num/=10;
	}while(num>0);
	
	printf("the sum of the all odd digits is %d\n",sum);
	
	return 0;
}
