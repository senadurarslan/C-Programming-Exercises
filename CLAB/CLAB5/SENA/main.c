#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/* 1 2 3 
	   2 4 5      01 10  /  02 20  /   12 21
	   3 5 6      ij ji
	*/
    // nxn boyutunda matris tanýmlanýyor (VLA - Variable Length Array)
    int matris[3][3];
    int k=0;
    // Tek bir while döngüsü ile hem veri alýmý hem simetriklik kontrolü yapýlacak
    while (k < 9) {
        int i = k / 3;  // satýr indeksi
        int j = k % 3;  // sütun indeksi

        // Kullanýcýdan matris elemanýný al
        printf("matris[%d][%d]: ", i, j);
        scanf("%d", &matris[i][j]);
        

        // Sadece alt üçgendeki elemanlar (i > j) için kontrol yaparýz
        // Çünkü simetriklik matris[i][j] == matris[j][i] anlamýna gelir
        if (i > j && matris[i][j] != matris[j][i]) {
            // Eðer simetrik deðilse, mesaj verip programdan çýk
            printf("Matris simetrik degildir.\n");
            return 0;
        }

        k++;  // Bir sonraki hücreye geç
    }

    // Eðer kontrol sýrasýnda herhangi bir simetrik bozulma yoksa, matris simetriktir
    printf("Matris simetriktir.\n");
    return 0;
}

