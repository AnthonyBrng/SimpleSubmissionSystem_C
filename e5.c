#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


#define MAXGRAD 32
#define N 50

double poly(int len, const double coefficients[len], double x);

/**
 *
 */
int main(int argc, char *argv[])
{
    double coefficients[MAXGRAD] ;
    int coeff_index = 0;

    char c ;
    char str[N] ;
    char stop_c = 'd' ;
    int str_index = 0 ;


    printf("Eingabe:\n");
    while( (c = getchar()) != stop_c )
    {
        if(c != stop_c && c != '-' && c != '.' && !isdigit(c) && !isspace(c))
        {
            printf("exit wegen character '%d'\n", c);
            return 1 ;
        }

        if(isspace(c))
        {
            str[str_index++] = '\0' ;
            coefficients[coeff_index++] = atof(str);
            str_index = 0 ;
        }
        str[str_index++] = c ;
    }


    printf("Bitte Stellen zur Auswertung angeben\n");
    for(double i=0, x ; (scanf("%lf", &x) == 1) ; i++ )
        printf("Wert des Polynoms an Stelle %lf : %lf\n", x, poly(coeff_index,coefficients, x));


    printf("ende\n");

    return 0 ;
}

/**
 *
 * @param coefficients
 * @param x
 * @return
 */
double poly(int len, const double coefficients[len], double x)
{
    if(len <= 0)
        return 0.0 ;

    double result = coefficients[len-1] ;

    while(--len)
        result = (result * x) + coefficients[len] ;

    return result ;
}