#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int size;
int main(int argc, char *argv[]) {
	
	int arr[10],i,bignum,minnum;

    for (i = 0; i<sizeof(arr)/sizeof(arr[0]); i++) 
	{
        printf("Enter %d. element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    bignum=INT_MIN;
    minnum=INT_MAX;
    
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++) // i<sizeof(arr)/sizeof(arr[0] eleman sayýsýný verir
    {
        if(bignum<arr[i])
        {
            bignum=arr[i];
        }
        if(minnum>arr[i])
        {
            minnum=arr[i];
        }
    } 
    printf("bignum: %d  minnum: %d",bignum,minnum);
    
	return 0;
}
