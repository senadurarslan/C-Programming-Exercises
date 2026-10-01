#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0, num;

    do {
        printf("Sayi girin: ");
        scanf("%d", &num);

        sum = sum + num; // Add input number to sum
        printf("Cikti: %d\n", sum); // Print the sum

    } while (num != 0); // Continue until user enters 0

    printf("Program sonlandi. Son toplam: %d\n", sum);
    return 0;
}

