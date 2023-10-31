#include <stdio.h>
#include <stdlib.h>
int DecToBin(int Decimal){
    if (Decimal ==0){
        return 0;
    }
    DecToBin(Decimal/2);
    printf("%d",Decimal%2);
}
int main()
{
   int Decimal;
   printf("Enter a Decimal NO. :");
   scanf("%d",&Decimal);

   printf("DECIMAL TO BINARY CONVERTER");
   printf("\n");
   DecToBin(Decimal);
   printf("\n");
   return 0;

}
