#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void DrawTriangle();
int row;

int main(int argc, char *argv[])
 {
 	
	printf("enter row number:");
	scanf("%d",&row);
	DrawTriangle();
	return 0;
}

void DrawTriangle()
{
	int i,j;
	for(i=1;i<=row;i++)
	{
		if(i==1||i==row)
		{
			for(j=1;j<=row+1-i;j++) printf("*");
		}
		else
		{
		    printf("*");
			for(j=2; j<=row-i ;j++) printf(" ");
			printf("*");		
		}
		printf("\n");
	}
}

