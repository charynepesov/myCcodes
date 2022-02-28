#include <stdio.h>
#include <time.h>
#include <unistd.h>

int function sum(int n) {    
    return n + sum(n-1);
}

int main(void) {    
    double time_spent = 0.0;

    clock_t begin = clock();
    
    
    
    
    
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nGecen zaman %f saniye", time_spent);



    return 0;
}

