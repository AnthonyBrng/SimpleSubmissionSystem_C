#include <stdio.h>
#include <ctype.h>

#define LEN 100

int main()
{
    char chars[LEN] ;
    int counter ;

    for(counter = 0 ; isalpha(chars[counter] = getchar()) || chars[counter] == ' '  ; counter++)
        ;

    for(int i = 0; i <= --counter ; i++)
        if(toupper(chars[i]) != toupper(chars[counter]))
        {
            printf("kein Palindrom\n");
            return 1 ;
        }

    printf("Palindrom\n");

    return 0 ;
}
