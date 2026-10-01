#include <stdio.h>
#include <stdlib.h>

int SumFac ();
int num;

int main()
{
   
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The sum of the factorial of digits is %d\n",SumFac());
  return 0;
}

int SumFac ()
{
   int sum=0,f=1,dig;
  
   for(; num>0 ; num/=10)
{  
   for(dig=num%10,f=1;dig>0; f=f*dig,dig--);
   sum=sum+f;
}
return sum;
}
