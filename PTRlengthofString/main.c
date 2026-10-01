#include <stdio.h>
#include <stdlib.h>


int main() {
    char *P[] = { "Sandra Bullock", "Betty White", "Jamie Lee Curtis", NULL };
    int len = 0;
    int i = 0;

    while (*(P + i) != NULL) {
        len = 0;
        while (*(*(P + i) + len) != '\0')
        {
            len++;
        }
        printf("The length of %s is: %d\n", *(P + i), len);
        i++;
    }

    return 0;
}
/*
P[0] › "Sandra Bullock"  
P[1] › "Betty White"  
P[2] › "Jamie Lee Curtis"  
P[3] › NULL
*/
/*
Ýndeks	Karakter
0	'S'
1	'a'
2	'n'
3	'd'
4	'r'
5	'a'
6	' ' (boþluk)
7	'B'
8	'u'
9	'l'
10	'l'
11	'o'
12	'c'
13	'k'
14	'\0' ‹ null karakter (string sonu)
*/
