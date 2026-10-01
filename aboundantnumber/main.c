#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	   int num,sum=0,i=1;

    printf("Enter a number:");
    scanf("%d",&num);

    while(i < num)
    {
        if(num%i==0)
        {
            sum=sum+i;
            printf("%d ",i);

        }
         i++;
    }
    printf("\n%d",sum);

        if(sum>num)
        {
        printf("\n The number %d is aboundant number\n",num);
        }
        else
        {
        printf("\n The number %d is not aboundant number\n",num);
        }
        
	return 0;
}
