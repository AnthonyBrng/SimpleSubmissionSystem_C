#include <stdio.h>
#include <stdlib.h>

char* strinv(const char* s) ;

int main()
{

    char* s = "hallo" ;

    char *t = strinv(s) ;

    printf("%s\n", t) ;

    free(t);

    return 0 ;
}


char* strinv(const char* s)
{
    const char *sstart = s ;
    int size = 0 ;

    while(*s++)
        size++ ;

    char *result = malloc(sizeof(char)*(size+1)), *rstart = result ;

    if(result == NULL)
        return result ;

    while(size--)
        *(result++) = *(sstart+size) ;

    *result = '\0' ;

    return rstart ;
}
