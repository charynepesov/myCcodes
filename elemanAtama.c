#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

/* Lab Uygulaması 1:
Rastgele 1000,10000,100000 elemanı 
Tek boyutlu diziye yerleştirme 
İki boyutlu diziye yerleştirme 
Üç boyutlu diziye yerleştirme

sürelerini C dili kullanarak milisaniye(ms) cinsinden 
bulan kodu yazınız

Ek Açıklama : Örneğin 10000 elemanın tek boyutlu 
diziye yerleştirilmesi 1 for döngüsü ile
İki boyutlu diziye yerleştirilmesi 2 for döngüsü ile
Üç boyutlu diziye yerleştirilmesi 3 for döngüsü ile 
gerçekleştirilir. */

int main(void) {

    double time_spent = 0.0;
    int myArray1[1000];
    int myArray2[25][40];
    int myArray3[10][10][10];

    int myArray4[10000];
    int myArray5[100][100];
    int myArray6[25][20][20];

    int myArray7[100000];
    int myArray8[250][400];
    int myArray9[50][50][40];

    clock_t begin = clock();
//-------------------------------------------------------------

    //1000 eleman atama 1 boyut
    for (int i = 0; i < 1000; i++)
    {
        myArray1[i] = rand();
        //printf("%d\n", myArray1[i]);
    }

    //1000 eleman atama 2 boyut
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            myArray2[i][j] = rand();
            //printf("%d\n", myArray2[i][j]);
        }        
    }

    //1000 eleman atama 3 boyut
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            for (int k = 0; k < 10; k++)
            {
                myArray3[i][j][k] = rand();
                //printf("%d\n", myArray2[i][j]);
            }
        }        
    }

//-------------------------------------------------------------

    //10000 eleman atama 1 boyut
    for (int i = 0; i < 10000; i++)
    {
        myArray4[i] = rand();
        //printf("%d\n", myArray1[i]);
    }

    //10000 eleman atama 2 boyut
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            myArray5[i][j] = rand();
            //printf("%d\n", myArray2[i][j]);
        }        
    }

    //10000 eleman atama 3 boyut
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 20; j++)
        {   
            for (int k = 0; k < 20; k++)
            {
                myArray6[i][j][k] = rand();
                //printf("%d\n", myArray2[i][j]);
            }
        }        
    }

//-------------------------------------------------------------

    //100000 eleman atama 1 boyut
    for (int i = 0; i < 100000; i++)
    {
        myArray7[i] = rand();
        //printf("%d\n", myArray1[i]);
    }

    //100000 eleman atama 2 boyut
    for (int i = 0; i < 250; i++)
    {
        for (int j = 0; j < 400; j++)
        {
            myArray8[i][j] = rand();
            //printf("%d\n", myArray2[i][j]);
        }        
    }

    //100000 eleman atama 3 boyut
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {   
            for (int k = 0; k < 40; k++)
            {
                myArray9[i][j][k] = rand();
                //printf("%d\n", myArray2[i][j]);
            }
        }        
    }

    //sleep(3);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Gecen zaman %f saniye", time_spent);
    return 0;
}