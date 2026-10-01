#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int FindNeg(int[][5]);

int main()
{
    int mat[][5]={10,-5,7,8,-6,4,-2,1,9,-12};
    printf("The count of the negative numbers=%d\n",FindNeg(mat));
    return 0;
}

int FindNeg(int arr[][5])
{
    int i=0,j,c=0;
    while (i<2)
    {
        j=0;
        while (j<5)
        {
            if(arr[i][j]<0)
            {
                c++;
              
            }
              j++;
            
        }
        i++;
    }
 return c;
}
  
