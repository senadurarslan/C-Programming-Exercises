#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j;
	
	for(i=1; i<=5; i++)
	{
	  for(j=1; j<=5-i; j++){
	  	printf(" ");
	  }
	  if(i==1 || i==5)
	  {
	  	for(j=1; j<=5; j++)
		{
	  		printf("*");
		}
	  }
	  else
	  {
	    printf("*");
		for(j=2; j<=4; j++)
		{
			printf(" ");
		}
		printf("*");	
	  }
	  printf("\n");
	}
	
	return 0;
}
