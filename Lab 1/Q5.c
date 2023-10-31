#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void printFibonacciSeries(int n, int i) {
    if (i < n) {
        printf("%d ", fibonacci(i));
        printFibonacciSeries(n, i + 1);
    }
}
int main()
{
    int n;

    printf("Enter the value of n to calculate the nth Fibonacci number and series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series up to %d: ", n);
        printFibonacciSeries(n, 0);
        printf("\n");

    }

    return 0;

}
