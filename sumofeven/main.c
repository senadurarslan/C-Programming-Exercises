#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>//sleep çaıitıran program

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, sum=0;
	
	printf("Enter a number:");
	
	for(; scanf("%d",&num)!=0 ; )
	{
		for(sum=0; num>0; sum += (num % 10) % 2 == 0 ? num % 10 : 0,num/=10);
		printf("The sum of all even digits of number is %d",sum);
		sleep(3);
		system("cls");
		printf("Enter a number:");
	}
	
	return 0;
}
