#include <stdio.h>
#include <stdlib.h>

struct Distance{
     int feet;
     int inch;
    };
int main(){
    struct Distance distance1, distance2;
    // Get the first distance from the user
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inch);

    // Get the second distance from the user
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inch);
    int result=distance1.feet+distance2.feet;
    int result2=distance1.inch+distance2.inch;
    printf("%d\n",result);
    printf("%d",result2);

    return 0;
}

