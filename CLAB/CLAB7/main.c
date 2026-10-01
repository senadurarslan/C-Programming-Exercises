#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//  bir cümledeki boþluk sayýsýný bulun(pointer kullnarak) sadece üç deðiþken,bir while ve bir if kullanabilirsin.
//  örneðin cümle :C proglamlama çok eðlenceli. örnek çýktý 3 olacak
//                : Hello Word again. örnek çýktý 2 olacak
int main(int argc, char *argv[]) {
	char str[200];
	char *p;
	int count=0;
	
	printf("Bir cümle giriniz: ");
    gets(str);
	p=str;
	
	while(*p!='\0')
	{
		if(*p==' ')
		{
			count++;
		}
		*p++;
	}
	
	printf("Cümledeki bosluk sayisi: %d\n",count);
    
	return 0;
}













