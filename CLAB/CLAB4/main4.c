#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[10],i,sum=0;
	float ort;
	
	printf("10 adet sayi giriniz:\n");
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d. elements:",i+1);
		scanf("%d",&arr[i]);
		sum+= arr[i];
		printf("sum: %d\n",sum);
		
	}	
	ort=sum/10;
	printf("Ortalama: %f\n",ort);
	
	return 0;
}


    
