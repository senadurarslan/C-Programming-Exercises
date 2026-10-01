#include <stdio.h>
#include <stdlib.h>

int main() {
    char cumle[] = "sena sumeyye";
    int sonuc = sessizHarfSayisi(cumle);
    printf("Sessiz harf sayisi: %d\n", sonuc);
    return 0;
}

int sessizHarfSayisi(char *ptr) {
    int sayac = 0;
    while (*ptr != '\0') {
        if (((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) &&
            !(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
              *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')) {
            sayac++;
        }
        ptr++;
    }
    return sayac;
}

