#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strlen için

void RevEachString(char *P[]);

int main() {
    char *str[] = { "Julia", "Shirley", "Audrey", "Temple", "Hepburn", "Roberts", NULL };
    RevEachStr(str);
    return 0;
}

void RevEachStr(char *P[]) {
    int i, j, len = 0;

    for (i = 0; i<6 ; i++) {
        len = strlen(*(P+i));  // i'nci stringin uzunluðu
        for (j = 0; j < len; j++) { // Karakterleri sondan baþa yazdýr
            printf("%-2c", *(*(P+i) + len - 1 - j)); //len - 1 - j › tersten gitmek için gereken offset
        }

        printf("\n");  // Her ismi ayrý satýra yaz
    }
}
/*
i = 0 › "Julia"
len = 5
j = 0 › *( *(P+0) + 4 ) › 'a'
j = 1 › *( *(P+0) + 3 ) › 'i'
j = 2 › 'l'
j = 3 › 'u'
j = 4 › 'J'
*/
