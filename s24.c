#include <stdio.h>


int strend(const char* s, const char* t);
char* strrchr(const char* s, int c) ;
char* strstr(const char* s, const char* t) ;


int main()
{
    char* s = "hallosal" ;
    char* t = "a" ;
    //printf("%d\n", strend(s, t));

    char c = 'a' ;
    //printf("%s\n", strrchr(s, c));

    char* p = strstr(s, t) ;

    if(p == NULL)
        return 1 ;

    for(int i=0; i<4 ; i++)
        printf("%c", *(p+i));

    printf("\n");


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

/**
 *
 * @param s
 * @param t
 * @return
 */
char* strstr(const char* s, const char* t)
{
    char* result = NULL ;
    const char* t_start = t ;
    int isSet = 0 ;

    while(*s && *t)
    {
        //printf("%c == %c\n", *s, *t);
        if(*s == *t)
        {
            if(!isSet)
            {
                result = s ;
                isSet = 1 ;
            }
            *s++, *t++ ;
        }
        else
        {
            result = NULL;
            *s++, t = t_start ;
        }
    }

    return result ;
}



