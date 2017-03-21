#include <stdio.h>
#include <stdlib.h>

char* strinv(const char *s) ;
int strlen(const char *string);
char *strconcat(const char *s, const char *t) ;

int main()
{

    char *s = "hallo" ;

    char *t = "duuuuu!" ;

    char *p =  strconcat(s, t) ;

    printf(">%s<\n", p) ;

    //printf("%d\n", strlen(s)) ;

    free(p);

    return 0 ;
}


/**
 *
 * @param s
 * @return
 */
char* strinv(const char *s)
{
    const char *sstart = s ;
    int size = strlen(s) ;
    char *result = malloc((size+1));
    char *rstart = result ;

    if(result == NULL)
        return result ;

    while(size--)
        *(result++) = *(sstart+size) ;

    *result = '\0' ;

    return rstart ;
}

/**
 *
 * @param s
 * @param t
 * @return
 */
char *strconcat(const char *s, const char *t)
{
    int slen = strlen(s) ;
    int tlen = strlen(t) ;
    char *result = malloc(slen + tlen + 1) ;
    char *rstart = result ;

    if(result == NULL)
        return result ;

    *(result+slen+tlen) = '\0' ;

    while(*s || *t)
    {
        if(*s)
            *result = *s++ ;
        if(*t)
            *(result+slen) = *t++ ;
        *result++ ;
    }

    return rstart ;
}

/**
 * Gibt die Länge des String ohne Nullzeichen zurück
 * @param string
 * @return
 */
int strlen(const char *string)
{
    int len = 0 ;
    while(*string++)
        len++ ;
    return len ;
}
