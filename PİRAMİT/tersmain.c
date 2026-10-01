#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	    int i,j, k=9;
    for ( i = 1; i <=5 ; i++)
    {
        for ( j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= k; j++)
        {
            printf("%d",j);
        }
        k=k-2;
        printf("\n");
    }
	return 0;
}
