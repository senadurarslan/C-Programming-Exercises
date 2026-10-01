// 12345678900 - Adýnýz - Soyadýnýz

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256

// Kelimeyi büyük harfe çevir
void to_upper(char str[]) {
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

// Ortak en uzun kelimeyi bul
void find_common_word(char c1[], char c2[], char result[]) {
    char temp1[MAX], temp2[MAX];
    char *w1, *w2;
    int max_len = 0;
    result[0] = '\0';

    strcpy(temp1, c1);
    w1 = strtok(temp1, " .,\n");

    while (w1 != NULL) {
        strcpy(temp2, c2);
        w2 = strtok(temp2, " .,\n");

        while (w2 != NULL) {
            if (strcasecmp(w1, w2) == 0 && strlen(w1) > max_len) {
                max_len = strlen(w1);
                strcpy(result, w1);
            }
            w2 = strtok(NULL, " .,\n");
        }
        w1 = strtok(NULL, " .,\n");
    }
}

int main() {
    char c1[MAX], c2[MAX];
    char ortak[MAX];

    while (1) {
        printf("Cümle 1 (çýkmak için q): ");
        fgets(c1, MAX, stdin);
        if (c1[0] == 'q' || c1[0] == 'Q') break;

        printf("Cümle 2 (çýkmak için q): ");
        fgets(c2, MAX, stdin);
        if (c2[0] == 'q' || c2[0] == 'Q') break;

        find_common_word(c1, c2, ortak);

        if (strlen(ortak) > 0) {
            char buyuk[MAX];
            strcpy(buyuk, ortak);
            to_upper(buyuk);

            // Satýr sonlarýný kaldýr
            c1[strcspn(c1, "\n")] = '\0';
            c2[strcspn(c2, "\n")] = '\0';

            printf("%s. %s %s.\n", c1, buyuk, c2);
        } else {
            printf("Ortak kelime bulunamadý. Lütfen tekrar deneyin.\n");
        }
    }

    return 0;
}

