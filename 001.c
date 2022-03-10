#include <stdio.h>
int function fibRecursive();

int main(void) {

    int fiboNumber = 0;
    printf("Please enter fibonacci number: ");
    scanf("%d", &fiboNumber);

       
    printf("%d", fibRecursive(fiboNumber));

    return 0;
}

int function fibRecursive (int n) {
        if (n <= 1) {
            return n;
        }
        else {
            return fibRecursive(n-1) + fibRecursive(n-2);
        }
    } 