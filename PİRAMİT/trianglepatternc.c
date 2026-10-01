#include <stdio.h>
#include <stdlib.h>
//enter row number 8
int main()
{
    int row=8,i,j;
    for ( i = 1; i <=row; i++)
    {
       if(i%2==1)
       {
        for(j=row-i+1;j>0;j--)
        {
            printf("%-2d",j);
        }
       }
       else
       {
        for(j=1;j<=row-i+1;j++)
        {
            printf("%-2d",j);
        }
       }
           printf("\n");
    }
    return 0;
}
