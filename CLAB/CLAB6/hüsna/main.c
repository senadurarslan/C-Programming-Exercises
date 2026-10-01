#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int sesliHarfSayisi(char *ptr) {
    int sayac = 0;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            sayac++;
        }
        ptr++;
    }
    return sayac;
}

int main() {
    char cumle[] = "Pointer kullanarak cumle icindeki sesli harfleri sayin";
    int sonuc = sesliHarfSayisi(cumle);
    printf("Sesli harf sayisi: %d\n", sonuc);
    return 0;
}

