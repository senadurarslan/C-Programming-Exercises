#include <stdio.h>
#include <stdlib.h>

//getchar() fonksiyonu her çaðrýldýðýnda, program kullanýcýnýn girdiði karakteri alýr ve onun ASCII deðerini döndürür. 
//Bu karakter, kullanýcý klavyeden bir tuþa basana kadar beklenir.,

void SortArr(int []);

int main()
{
    int all[]={3,8,1,-4,5,2};
    SortArr(all);
    return 0;
}

void SortArr(int arr[])
{
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted Array:");
    for(i=0;i<6;i++)
    {
        printf("%-3d ",arr[i]);
    }
}
