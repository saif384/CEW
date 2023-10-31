#include <stdio.h>
#include <stdlib.h>

int main()
{

   char str[]=" this is c programming";

    for (int i=0;i<strlen(str);i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=str[i]-32;
            }
            else if(str[i]>='A' && str[i]<='Z'){

                str[i]=str[i]+32;
            }

    }
    printf("The string after modification is: %s",str);
}
