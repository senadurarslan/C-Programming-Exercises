#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num1,num2,res;
   char choice;
   printf("1.addition\n");
   printf("2.substraction\n");
   printf("3.multiplicion\n");
   printf("4.divison\n");

   printf("enter your choise:");
   scanf("%c",&choice);

    switch (choice)
    {
    case '1':
         printf("\nEnter two number:");
         scanf("%f%f",&num1,&num2);
         res=num1+num2;
         printf("result of your choice is %f",res);
        break;
    case '2':
         printf("\nEnter two number:");
         scanf("%f%f",&num1,&num2);
         res=num1-num2;
         printf("result of your choice is %f",res);
        break;
    case '3':
         printf("\nEnter two number:");
         scanf("%f%f",&num1,&num2);
         res=num1*num2;
         printf("result of your choice is %f",res);
        break;
    case '4':
         printf("\nEnter two number:");
         scanf("%f%f",&num1,&num2);
         res=num1/num2;
         printf("result of your choice is %.10f",res);
        break;
    default:
        printf("you press wrong number for choise");
        break;
    }
    return 0;
}
