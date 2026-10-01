#include <stdio.h>
#include <stdlib.h>
//PRÝNT from 1 to N POLÝDROM NUMBERS OR NOT
//1 ,4,8,11,88,77,121,757,303 ,98789vb.
//remnum,
//revnum,tersten yazýlan sayý
//temp,ondalýklarýna ayýrmama yardýmcý olur
int main() 
{
    int N,num=1,remnum,revnum=0;

    printf("Enter a number:");
    scanf("%d",&N);

    printf("polindrom numbers up to %d are:\n",N);

    while(num<=N)
    {
        //remnum=num;
        int temp=num;
        while(temp>0)
        {
            revnum=revnum*10+temp%10;
            temp=temp/10;
        }
        if(revnum==num)//revnum==remnum;
        {
            printf("%d ",num);//remnum
        }
        revnum=0;
        num++;
    }
    return 0;
}
