#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char *P[] = { "Sandra Bullock", "Betty White", "Jamie Lee Curtis", NULL };
	int i=0,len=0;
	while(*(P+i)!=NULL){
		len=0;
		while(*(*(P+i)+len) !='\0'){
			len++;
		}
		printf("The length of %s is %d\n",*(P+i),len);
		i++;
	}
	return 0;
}
