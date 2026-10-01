#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//calculating sum of square of digits in an integer number.
#define calcpow(num) pow(num,2)


int main(int argc, char *argv[]) {

  int sum=0,num=0;

   printf("Enter a number: ");
while(scanf("%d",&num)!=0){
   while (num>0)
    {
       sum=sum+calcpow(num%10);
       num=num/10;
    }
    printf("The sum of the squares of digits is %d\n",sum);
    printf("Enter a number: ");
    sum=0;
  }
    return 0;
}

