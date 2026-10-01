#include <stdio.h>

int main() {
    int a[2][3], b[3][2], i, j, k;

    printf("2x3 Matris A elemanlarini giriniz:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Matris A (2x3):\n");
    for(i=0; i<2; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("3x2 Matris B elemanlarini giriniz:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matris B (3x2):\n");
    for(i=0; i<3; i++) {
        for(j=0; j<2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Carpim Sonucu Matris (2x2):\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            int toplam = 0;
            for(k=0; k<3; k++) {
                toplam += a[i][k] * b[k][j];
            }
            printf("%d ", toplam);
        }
        printf("\n");
    }

    return 0;
}

