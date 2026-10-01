// 12345678900 - Adýnýz - Soyadýnýz

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 256

void str_to_upper(char *str) {
	int i;
    for ( i = 0; str[i]; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

// En uzun ortak kelimeyi bulma
char* find_longest_common_word(char *s1, char *s2) {
    static char result[MAX];
    char temp1[MAX], temp2[MAX];
    strcpy(temp1, s1);
    strcpy(temp2, s2);

    char *word1 = strtok(temp1, " .,!?\n");
    int max_len = 0;

    while (word1 != NULL) {
        char temp_copy[MAX];
        strcpy(temp_copy, s2);
        char *word2 = strtok(temp_copy, " .,!?\n");
        while (word2 != NULL) {
            if (strcasecmp(word1, word2) == 0 && strlen(word1) > max_len) {
                strcpy(result, word1);
                max_len = strlen(word1);
            }
            word2 = strtok(NULL, " .,!?\n");
        }
        word1 = strtok(NULL, " .,!?\n");
    }

    return max_len > 0 ? result : NULL;
}

int main() {
    char sentence1[MAX], sentence2[MAX];

    while (1) {
        printf("Cümle 1 (çýkmak için q): ");
        fgets(sentence1, MAX, stdin);
        if (sentence1[0] == 'q' || sentence1[0] == 'Q') break;

        printf("Cümle 2 (çýkmak için q): ");
        fgets(sentence2, MAX, stdin);
        if (sentence2[0] == 'q' || sentence2[0] == 'Q') break;

        sentence1[strcspn(sentence1, "\n")] = '\0';
        sentence2[strcspn(sentence2, "\n")] = '\0';

        char *common = find_longest_common_word(sentence1, sentence2);

        if (common != NULL) {
            char upper_word[MAX];
            strcpy(upper_word, common);
            str_to_upper(upper_word);

            printf("%s. %s %s.\n", sentence1, upper_word, sentence2);
        } else {
            printf("Ortak kelime bulunamadý. Lütfen tekrar deneyin.\n");
        }
    }

    return 0;
}

