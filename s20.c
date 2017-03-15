#include <stdio.h>

int datum2int(int tag, int monat) ;
void int2datum(int tage, int* ergebnis);

/**
 *
 * @return
 */
int main()
{

    int datum[2] ;

    printf("Tag Nr.%d\n" , datum2int(11,2));

    int2datum(datum2int(11,2), datum) ;

    printf("%d.%d\n", datum[0], datum[1]);


    return 0 ;
}


/**
 *
 * @param tag
 * @param monat
 * @return
 */
int datum2int(int tag, int monat)
{
    int result = 0 ;
    int monate[] = {31, 28, 31, 30, 31, 30, 31,31,30, 31, 30, 31};

    if(monat > 12 || monat <= 0 || tag > monate[monat-1] || tag <= 0)
        return -1 ;

    for(int i=0 ; i < monat-1 ; result+= monate[i++])
        ;

    return  result += tag;
}


/**
 *
 * @param tage
 * @param ergebnis
 */
void int2datum(int tage, int* ergebnis)
{
    int monate[] = {31, 28, 31, 30, 31, 30, 31,31,30, 31, 30, 31};
    int monat ;

    for(monat = 0 ; tage > monate[monat] ; tage -= monate[monat++] )
        ;

    ergebnis[0] = tage ;
    ergebnis[1] = monat+1 ;

}