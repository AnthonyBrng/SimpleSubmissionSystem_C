#include <stdio.h>
#include <math.h>

#define LEN 1000

void prim_del(int len, int numbers[len]);
void prim_sieb(int len, int number[len]) ;

/**
 *
 * @return
 */
int main()
{
    int numbers[LEN] ;

    for(int i= 0 ; i < LEN ; i++)
        numbers[i] = i;

    // Solution 1
    //prim_del(LEN, numbers) ;

    //Solution 2
    prim_sieb(LEN, numbers) ;



    for(int i=0 ; i < LEN ; i++)
        if(numbers[i] != -1)
            printf("%d ", numbers[i]);


    return 0 ;
}

/**
 * Primzahlen ermitteln druch Teilersuche
 * @param len
 * @param numbers
 */
void prim_del(int len, int numbers[len])
{
    int start = 4 ;
    for(int posPrim = start ; posPrim < len ; posPrim++)
    {
        int upperBound = (int) sqrt(posPrim) ;
        for(int teiler=2 ; teiler <= upperBound ; teiler++)
            if(posPrim % teiler == 0)
                numbers[posPrim] = -1 ;

    }
}


/**
 * Primzahlen ermitteln druch Eratosthenes-Sieb
 * @param len
 * @param number
 */
void prim_sieb(int len, int number[len])
{
    int start = 2 ;
    for(int prim = start ; prim < len; prim++)
        if(number[prim] != -1)
            for(int n = 2 ; prim * n <= len -1 ; number[prim*n++] = -1)
                ;
}


