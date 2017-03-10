#include <stdio.h>

int main()
{
    float result = 0;
    float number ;
    int counter = 0 ;

    for(int err_val ;(err_val = scanf("%f", &number)) != EOF ; result += number, counter ++)
        if(!err_val)
        {
            printf("Fehler bei der Eingabe.\n");
            return 1 ;
        }

    printf("Lösung:%f\n",result/((counter !=0) ? counter : 1)) ; // vermeidung von DivisionByZero

    return 0 ;
}

