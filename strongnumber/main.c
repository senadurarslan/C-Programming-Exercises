#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,sum,fact=1,remnum,dig;
	
	printf("Enter a number:");
	scanf("%d",&num);
	remnum=num;
	do
	{
		dig=num%10;
		do
		{
			fact=fact*dig;
			dig--;
		}while(dig>0);
		sum+=fact;
		num/=10;
		fact=1;
	}while(num>0);
	if(remnum==sum)
	{
		printf("the num '%d' is strong num",remnum);
	}
	else
	{
		printf("the num '%d' is not strong num",remnum);

	}
	return 0;
}
