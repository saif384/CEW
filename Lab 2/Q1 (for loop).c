#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=1;
    int sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int count = 1; count <= n; count++) {
        printf("%d ", i);
        sum += i;
        i += 2;
    }
    printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);
}
