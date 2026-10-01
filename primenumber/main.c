#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int i = 2, j=2, N;
    bool isPrime=true;

    printf("Enter the final number: ");
    scanf("%d", &N);

    while (i <= N) {  
          
           j = 2; 
        while (j < i && isPrime) { 
            if (i % j == 0) {
                isPrime = false;
            }
            j++;
        }

        if (isPrime) {
            printf("%d is Prime\n", i);
        } else {
            printf("%d is not Prime\n", i);
        }

     
        i++;   
        isPrime = true;
    }

    return 0;
}

