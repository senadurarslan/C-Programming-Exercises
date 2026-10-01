#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int i,j, k=1;
    for ( i = 1; i <=5 ; i++)
    {
        for ( j = 1; j <= 5-i; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= k; j++)
        {
            printf("%d",j);
        }
        k=k+2;
        printf("\n");
    }

	return 0;
}
