#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//kullanýcýnýn girdiði sayýya kadar çift sayýlarý yazdýrma
	
	int num,i=1;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	do
	{
	  if(i%2==0)
	  {
	  	printf("%d ",i);
	  }
	  i++;
	  
	}while(i<=num);
	
	return 0;
}

