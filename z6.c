#include <stdio.h>

int sum(int n) ;

int main()
{
    printf("%d", sum(5));
    return 0 ;
}


/**
 *
 * @param n
 * @return
 */
int sum(int n)
{
    if(n)
        return n + ((n<0) ? sum(n+1) : sum(n-1)) ;
    return 0 ;
}