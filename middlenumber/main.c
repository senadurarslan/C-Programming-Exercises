#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int firstdig,lastdig,middlesum=0,num;
    printf("Enter a number");
    scanf("%d",&num);

    lastdig=num%10;
    num=num/10;
    
    while(num>10)
    {
        middlesum=middlesum+num%10;
        num=num/10;
    }
    firstdig=num;
    printf("Firstd*ig= %d\n",firstdig);
    printf("Lastdig= %d\n",lastdig);
    printf("Middlesum= %d\n",middlesum);
	return 0;
	
}
