#include <stdio.h>

unsigned long ggT(unsigned long a, unsigned long b);

int main()
{

    return 0 ;
}


/**
 *
 * @param a
 * @param b
 * @return
 */
unsigned long ggT(unsigned long a, unsigned long b)
{
   if(b)
       return ggT(b, a%b) ;
    return a ;
}
