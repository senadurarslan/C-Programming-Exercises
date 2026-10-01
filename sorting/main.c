#include <stdio.h>
#include <stdlib.h>

#define prn(x,y,z) printf("%d>%d>%d\n",x,y,z);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1,n2,n3;
	
	printf("ENTER THREE NUMBERS:",n1,n2,n3);
	
for(; scanf("%d %d %d",&n1,&n2,&n3)!=0;){
		
	if(n1>n2 && n1>n3)
  {
    if(n2>n3)
    {
        prn(n1,n2,n3); 
    }
    else
    {
        prn(n1,n3,n2);
    }
  } 
   else if(n2>n3)
  {
     if(n1>n3)
     {
       prn(n2,n1,n3);
     }
     else
    {
     prn(n2,n3,n1);
    }
  }
   else
  {
    if(n1>n2)
    {
        prn(n3,n1,n2);
    }
    else
    {
        prn(n3,n2,n1);    
    }
  }
  printf("ENTER THREE NUMBERS:",n1,n2,n3);
  }
	
		return 0;	
	}

	


