#include <stdio.h>

int main()
{
    int number ;
    int result = 0 ;

    if(!scanf("%u", &number) || number<0)
    {
        printf("Fehler bei der Eingabe.\n") ;
        return 1 ;
    }

    for(int rest ; number ; number = (number-rest) / 10)
        result += rest = number % 10 ;

    printf("Quersumme: %d\n", result );

    return 0;
}