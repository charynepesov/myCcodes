#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    double time_spent = 0.0;
    int myArray1[10000];
    int max=0, min=0;
    int sayac = 0;


    for (int i = 0; i < 10000; i++)
    {
        myArray1[i] = rand();
        //printf("%d\n", myArray1[i]);
    }
clock_t begin = clock();
    while (sayac < 10000)
    {
        if (sayac == 0)
        {
            max = myArray1[sayac];
            min = myArray1[sayac];
        }
        else if (min > myArray1[sayac])
        {
            min = myArray1[sayac];
        }
        else if (max < myArray1[sayac])
        {
            max = myArray1[sayac];
        }
        sayac++;
    }
    
    printf("%d - %d = %d", max, min, max-min);
    
    //sleep(3);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Gecen zaman %f saniye", time_spent);
    


    return 0;
}