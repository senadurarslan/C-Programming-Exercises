#include <stdio.h>
#include <stdlib.h>
// prime number from 2 to n
int main()
{
    int N;

    printf("enter a number");
    scanf("%d",&N);
    
    int num=2;

    while (num<=N)
    {
       int i=2;
       int isprime=1;

       while (i<=num/2 && isprime)
       {
         if(num%i==0)
         {
            isprime=0;
         }
         i++;
       }
       if(isprime==1)
       {
        printf("%-4d",num);
       }
       num++;
       isprime=1;
    }   
return 0;
}

