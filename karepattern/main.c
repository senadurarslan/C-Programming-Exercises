#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=1,j=1;
    while (i<=5)
    {
        while (j<5+i)
        {
           printf("%d ",j);
          j++;
        }
        i++;
        printf("\n");
        j=i;
    }
	
	return 0;
}
