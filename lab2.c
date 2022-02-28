#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    int n = 1;
    int toplam = 0;
    double time_spent = 0.0;

    printf("Lutfen N sayisini giriniz\n");    
    scanf("%d", &n);
    clock_t begin = clock();
    
    if (n <= 0) {
        printf("Sayi 0");
    }
    else
    {
        toplam = (n*(n+1))/2;
        printf("%d", toplam);
    }
    
    
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\n Gecen zaman %f saniye", time_spent);



    return 0;
}