#include <stdio.h>
#include <stdlib.h>

int SumArr(int *);
int main(int argc, char *argv[]) {
	
	int numbers[]={4,6,3,12,0}; //0 sentinal değerdir
	printf("The sum is %d\n",SumArr(numbers));
	
	return 0;
}

int SumArr(int *p){
	int s=0;
	for(; *p!=0; s+=*p,p++);
	return s;
	
}

// C dilinde dizi ismi (numbers) aslında ilk elemanın adresidir. Yani int *p = numbers; eşittir p = &numbers[0];
