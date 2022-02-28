#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    double time_spent = 0.0;
    clock_t begin = clock();

    int eb = 100, ek = 1;

    int sonuc = (eb+ek)*((eb-ek)+1)/2;

    printf("%d ",sonuc);

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nGecen zaman %f saniye", time_spent);

    return 0;
}