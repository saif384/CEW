#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    printf("Enter Height:");
    scanf("%f",&height);
    float width;
    printf("Enter Width:");
    scanf("%f",&width);
    printf("The area of Rectangle %.2f\nThe Perimeter of Rectangle %.2f",height*width,2*height+2*width);
    return 0;
}
