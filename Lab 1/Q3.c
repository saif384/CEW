#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Height;
    printf("Enter Height in centimeter:");
    scanf("%f",&Height);
    if (Height<150){
        printf("Dwarf");
    }
    else if (Height==150){
        printf("Average");
    }
    else if(Height>=165) {
        printf("Tall");

    }
    else {
        printf("The Person may be Dwarf or Tall:)");
    }
    return 0;
}
