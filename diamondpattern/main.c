#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
    int sayi,i,j;
    printf("sayi girin:");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i++){
        for(j=1;j<=sayi-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=sayi-1;i>0;i--){
        for(j=1;j<=sayi-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
