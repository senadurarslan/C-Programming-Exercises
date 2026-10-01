#include <stdio.h>
#include <stdlib.h>

int SumDig(int (*P)[3]);

int main(int argc, char *argv[])
{
	int mat[][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	printf("The Sum of is %d\n",SumDig(mat));
	
	return 0;
}

int SumDig(int (*P)[3])
{
	int i,j, sum=0;
	for(i=0; i<4 ; i++)
	{
		for(j=0; j<3 ; j++)
		{
			if(i==j)
			{
				sum = sum +*(*(P+i)+j);
			}
		}
	}
	return sum;
}

