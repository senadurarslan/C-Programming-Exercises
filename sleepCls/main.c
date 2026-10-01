#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>//sleep çaýitýran program

#define findodd(num) (num%2==0 ? num:0) 
/*(n % 2 == 0): Bu kýsým bir koþul ifadesidir. Burada n'nin 2'ye bölümünden kalan 0 ise (yani n çift bir sayýysa), bu koþul doðrudur (true). Aksi takdirde, koþul yanlýþ (false) olur.
?: Bu operatör, üçlü koþul operatörüdür. Koþul ifadesi doðru ise (true), ifadenin deðeri ilk deðer olan n olur. Aksi takdirde (false), ifadenin deðeri ikinci deðer olan 0 olur.
n ve 0: Koþul doðru ise, ifade n'nin deðerini alýr. Koþul yanlýþ ise, ifade 0'ý alýr*/
//sürekli bir þekide ekrandan girile sayýlarr için iþlem yaptýktan sonra 
//5 sn bekle sonra ekraný temizle yeni sayý iste

int main()
{
    int num,sum=0;

    printf("Enter a number:");

    while(scanf("%d",&num)!=0)
    {
        do
        {
            sum=sum+findodd(num%10);
            num=num/10;
            
            
        } 
        while (num>0);

        printf("the sum of the all odd digits is %d\n",sum);
        sleep(5); //Bu fonksiyon, programýn belirtilen süre boyunca beklemesini saðlar. 
        system("cls");//ekraný temizler
        sum=0;
        num=0;
        printf("Enter a number:");
    }
    return 0;
}
