#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void EachCharRev(char (*P)[16]);
int main() {
    char str[][16] = {"Franco Baresi","Hugo Sanchez","Ruud Gullit","Marco VanBasten","Diego Maradona"};
    EachCharRev(str);
    int i=0;
    for(; i<5; i++) printf("%s\n",str[i]);
    return 0;
}

void EachCharRev( char(*P)[16])
 {
    int i, j, len;
    
    for (i = 0; i < 5; i++) {
        len = strlen(*(P + i));
        char rev[len];
        
        for (j = 0; j < len; j++) {
            rev[j] = *(*(P + i) + len - 1 - j);
        }
        
        for (j = 0; j < len; j++) {
            *(*(P + i) + j) = rev[j]; //Terslenmiþ veriyi orijinal diziye geri kopyalar.
        }
    }
}
