#include <stdio.h>

#define ANZAHL 128
#define PRINT_START 32

int main()
{
    int counters[ANZAHL] ;
    int c ;

    /*
     * Initialisierung
     */
    for(int i=ANZAHL ; i; counters[i--] = 0 )
        ;

    /*
     * Zählen
     */
    while((c=getchar()) != EOF)
        counters[(int)c]++ ;

    /*
     * Ausgabe
     */
    for(int i = 0 ; i< ANZAHL ; i++ )
    {
        if(i < PRINT_START)
            printf("<CTRL>%d:%d\n", i, counters[i]);
        else
            printf("'%c':%d\n", i, counters[i]);
    }
}

