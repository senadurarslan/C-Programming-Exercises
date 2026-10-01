#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // strlen için eklemen lazým!

void RevEachStr(char *P[]);  // Fonksiyon prototipi

int main(int argc, char *argv[]) {
    char *Str[] = {"Julia","Audrey","Temple","Hepburn","Roberts"};
    RevEachStr(Str);
    return 0;
}

void RevEachStr(char *P[]){
    int i, len, j;
    for(i = 0; P[i]!=NULL; i++){   // 5 kelime var › i<5
        len = strlen(*(P+i));
        for(j = 0; j < len; j++){
            printf("%-2c", *(*(P+i)+len-1-j));
        }
        printf("\n");
    }
}


