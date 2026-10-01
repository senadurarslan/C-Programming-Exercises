#include <stdio.h>
#include <stdlib.h>

#define PRN(N) printf("%-3d",N);

void SortNums(int *p);

int main(int argc, char *argv[]) {
	int i;
	int nums[] = {9, 2, 7, 3, 8};
	
	SortNums(nums);
	
	for(i=0; i<5; i++) {
		PRN(nums[i]);
	}
	
	return 0;
}

void SortNums(int *p) {
	int i, j, temp;
	for(i=0; i<5; i++) {
		for(j=i+1; j<5; j++) {
			if(*(p+i) > *(p+j)) {
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}


