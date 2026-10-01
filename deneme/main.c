#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=25, b=13;
	float result;
	result=a/b;
	printf("res=%.2f\n",result);
	result=(float)a/b;
	printf("res= %.2f\n",result);
	
	return 0;
}
