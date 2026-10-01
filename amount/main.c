#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int money,note200=0, note100=0, note50=0, note5=0, note1=0 ;
	
	printf("ENTER YOUR MONEY:");
	scanf("%d",&money);
	
	if(money>=200){
		note200=money/200;
		money= money-note200*200;
	}
	if(money>=100){
		note100=money/100;
		money= money-note100*100;
	}
	if(money>=50){
		note50=money/50;
		money= money-note50*50;	
	}
	if(money>=5){
		note5=money/5;
		money= money-note5*5;
	}
	if(money>=1){
		note1=money/1;
		money= money-note1*1;
	}
	
	printf("b200: %d\nb100: %d\nb50: %d\nb5: %d\nb1: %d\n",note200,note100,note50,note5,note1);
	return 0;
}
