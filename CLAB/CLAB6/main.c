#include <stdio.h>

int CountWords();

int main() {
    printf("Enter a sentence: ");
    int wordCount = CountWords();
    printf("The number of words is: %d\n", wordCount);
    return 0;
}

int CountWords() {
    char word[50]; // Her bir kelimeyi tutmak için bir dizi
    char *ptr;     // Pointer tanýmlandý
    int count = 0;

    // Kelimeleri tek tek oku
    while (scanf("%s", word) == 1) {
        ptr = word; // Pointer, kelime dizisini iþaret ediyor
        if (*ptr != '\0') { // Eðer kelime boþ deðilse
            count++; // Kelime sayýsýný artýr
        } else {
            // Kelime boþsa hiçbir þey yapma
        }
    }

    return count;
}
