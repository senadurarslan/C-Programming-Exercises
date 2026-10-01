#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
   KULLANICIDAN 5 ÖÐRENCÝNÝN NOTLARINI ALIP OTALAMALARINI HESAPLAYIN
   SADECE 1 FOR KULLANABÝLÝRSÝN VE STRUcT ÝLE YAPIN
   75 85 80 75 80 AVERAGE GRADES: 79
*/

struct Student {
    float grade;
};

int main() {
    struct Student students[5];
    float sum = 0;
    float average;
    int i;
    printf("5 tane ogrencinin notunu giriniz:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. ogrnencinin notu: ", i + 1);
        scanf("%f", &(students[i].grade));
        sum += students[i].grade;
    }
    
    average = sum / 5;

  
    printf("Average grade: %.2f\n", average);

    return 0;
}

