#include <stdio.h>
#include <stdlib.h>


#define findeven(num) (num%2==0 ? num:0) 
/*(n % 2 == 0): Bu kýsým bir koþul ifadesidir. Burada n'nin 2'ye bölümünden kalan 0 ise (yani n çift bir sayýysa), bu koþul doðrudur (true). Aksi takdirde, koþul yanlýþ (false) olur.
?: Bu operatör, üçlü koþul operatörüdür. Koþul ifadesi doðru ise (true), ifadenin deðeri ilk deðer olan n olur. Aksi takdirde (false), ifadenin deðeri ikinci deðer olan 0 olur.
n ve 0: Koþul doðru ise, ifade n'nin deðerini alýr. Koþul yanlýþ ise, ifade 0'ý alýr*/


int main()
{
    int num,sum=0;

    printf("Enter a number:");
    scanf("%d",&num);

        do
        {
            sum=sum+findeven(num%10);
            num=num/10;
            
            
        } 
        while (num>0);

        printf("the sum of the all even digits is %d\n",sum);
         return 0;
    }
   

