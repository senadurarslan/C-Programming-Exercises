#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int i=1, j=1 , satir;
    
    printf("Satir sayisini giriniz:");
    scanf("%d",&satir);
	for(i=1; i<=satir; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",i);
		}
		printf("\n");
		
	}
		
		
	
	return 0;
}
