#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i = 1;
    int sum = 0;
    int count = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (count <= n) {
        printf("%d ", i);
        sum += i;
        i += 2;  // Move to the next odd number
        count++;
    }
    printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);
}
