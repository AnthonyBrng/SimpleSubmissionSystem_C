#include <stdio.h>

int permtest(const unsigned int *p, int laenge) ;

int main()
{

    unsigned int per[] = {1,3,2};
    printf("%d\n",permtest(per, 3));
    return 0 ;
}



/**
 *
 * @param p
 * @param laenge
 * @return
 */
int permtest(const unsigned int* p, int laenge)
{
    const unsigned int* start = p ;
    unsigned int i = 1 ;

    while(p < start+laenge)
        if (*p++ == i)
        {
            p = start;
            i++ ;
        }

    return (i-1 == laenge) ;
}
