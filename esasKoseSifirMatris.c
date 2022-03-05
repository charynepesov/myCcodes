#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int myArray[4][4];
    //diziye eleman ata
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            myArray[i][j] = rand()/1000;
            // printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    //algoritma baslangici
    //dizi eleman sayisini hesapla
    int size = sizeof myArray / sizeof myArray[0];
    //esas kosegen elemanlarini sifir yap
    for (int i = 0; i < size; i++)
    {
        myArray[i][i] = 0;
    }
    //algoritma bitis

    //diziyi ekrana yazdir
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {            
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }
}