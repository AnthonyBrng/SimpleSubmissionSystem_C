#include <stdio.h>

int main()
{
    int number ;
    int inputs_elems ;

    while((inputs_elems = scanf("%d", &number)) != EOF)
        if(inputs_elems && number > 0 )
            printf("OKT: %o HEX: %x\n", number, number) ;
        else
            return 1 ;

    return 0;
}