#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int satir,stn,i,j;
	printf("satir sayisi giriniz:");
	scanf("%d",&satir);
	
	printf("sütun sayisi giriniz:");
	scanf("%d",&stn);
	
	for( i=1 ; i<=satir; i++)
	{
		for( j=1; j<=stn; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

	return 0;
}
