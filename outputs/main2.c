#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=1, j=1, k=0, r=2;
	for(; i<=r;i++,j=1,k=i+1){
		for(; j<=i;j++)
		while(j<=i){
			printf("%d ",k++);
			j++;
     	}
			printf("\n");
		
    }  
	
	return 0;
}
