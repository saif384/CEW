#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the first element:");
    scanf("%d",&a);
    printf("Enter the second element:");
    scanf("%d",&b);
    int c=a;
    a=b;
    b=c;
    printf("The first element after swapping is %d\n",a);
    printf("The second element after swapping is %d",b);
    return 0;
}
