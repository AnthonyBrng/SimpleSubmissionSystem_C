#include <stdio.h>


int main()
{
    char c = 0;
    int result = 0;

    for(c = 0, result = 0; (c = getchar()) != EOF && c != '\n' ; result*=2,  result += (c == '0') ? 0 : 1 )
        if(c != '0' && c != '1')
        {
            printf("Fehler bei der Eingabe.\n");
            return 1 ;
        }

    printf("Dezimal: %d\n", result);

}