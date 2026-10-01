#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//BÝR SAYIYI 2'nin 3.kuvveti ile çarpýn BÝTWÝSE ile. sayýyý kullanýcýdan alýnýz.  *** 2^3 yani 8 ile çarpma (sola kaydýrma)
// Örnek girdi: Bir sayý girin: 6  Örnek çýktý: (sayi*8)=48

int main() {
    int sayi,sonuc;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

     sonuc = sayi << 3;

    printf("(%d * 8) : %d\n", sayi, sonuc);
    return 0;
}

