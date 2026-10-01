#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* INT_MIN ? -2,147,483,648
   INT_MAX ? 2,147,483,647  */ 
int main()
{
    int bignum,smnum,i,arr[]={12,2,9,15,6};
    bignum=INT_MIN;   
    smnum=INT_MAX;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++) // i<sizeof(arr)/sizeof(arr[0] eleman sayýsýný verir
    {
        if(bignum<arr[i])
        {
            bignum=arr[i];
        }
        if(smnum>arr[i])
        {
            smnum=arr[i];
        }
    } 
    
    //with complex for 
    //for(i=0;i<sizeof(arr)/sizeof(arr[0]); smnum=smnum>arr[i]?arr[i]:smnum ,bignum=bignum<arr[i]?arr[i]:bignum,i++);
    printf("smallest=%d and biggest=%d",smnum,bignum);
    
    return 0;
}

