#include <stdio.h>


int strend(const char* s, const char* t);
char* strrchr(const char* s, int c) ;


int main()
{
    char* s = "hallosal" ;
    char* t = "ll" ;
    //printf("%d\n", strend(s, t));

    char c = 'a' ;
    //printf("%s\n", strrchr(s, c));

    return 0 ;
}


/**
 * Überprüft ob zeichenkette s mit zeichenkette t endet
 * @param s zu überprüfender string
 * @param t teilstring
 * @return 1 falls s mit t endet, sonst 0.
 */
int strend(const char* s, const char* t)
{
    for(int t_start = 0 ; *s ; s++)
        if(*s == *t)
            t_start ++ , t++ ;
        else if(*s != *t && *(s-1) != *s  && t_start)
            return 0 ;

    return (*s == *t);
}

/**
 * Liefert Zeiger auf die Speicherstelle in der c das letzte mal in s
 * vorkommt.
 * @param s string
 * @param c zu suchender character
 * @return Speicherstelle von c in s.
 */
char* strrchr(const char* s, int c)
{
    char* result = NULL ;

    while(*s++)
        if(*s == c)
            result = s ;

    return result ;
}