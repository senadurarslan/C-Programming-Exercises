#include <stdio.h>
#include <stdlib.h>

void RemDup(int all[]);
int size;

int main() {
    int all[50], i;
    printf("Enter the length of the array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("Enter %d. element: ", i + 1);
        scanf("%d", &all[i]);
     }
    printf("array:");
    for (i = 0; i < size; i++)
    {
    printf("%d ", all[i]);
    }   
    RemDup(all);

    return 0;
}


void RemDup(int arr[]) {
    int uniq[size];
    int i, j, len = 0;// c=len yani koddaki unique'in gerçek boyutu
    for(i=0; i<size; i++)
    {
        for ( j = 0; j < len; j++)
        {
            if (arr[i]==uniq[j])
            {
                break;
            }
        }
             if(j==len)
            {
            	uniq[len]=arr[i];
            	len++;
			}       
    }
     printf("\nUnique Array: ");
         for (i = 0; i < len; i++) 
		 {
              printf("%d ", uniq[i]);
         }
          printf("\n");
}
