#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//bir tam sayı al ve for döngüsünde faktoriyelini hesapla 2 değişken tanımla ve for kullan

int SumFac(int);
int num;
int main(int argc, char *argv[]) {
	printf("Enter a number:");
    scanf("%d",&num);
    printf("factorial of num is %d\n",SumFac(num));
	
	return 0;
}

int SumFac(int num)
{
	int fact=1;
	for(; num>0;num--)
	{
		fact=fact*num;
	}
	return fact;
}
