#include <stdio.h>

#define LINE_LENGTH 50
#define LINE_PARSES 2

int main()
{
    char str[LINE_PARSES*LINE_LENGTH];
    int indexPointer = 0 ;

    for(int j=0 ; j<LINE_PARSES ; j++)
    {
        for(int i = 0, c ; i < LINE_LENGTH && (c = getchar()) != '\n' ; str[indexPointer++] = c, i++)
            if(i == (LINE_LENGTH - 1))
            {
                printf("Fehler bei der Eingabe.\n");
                return 1 ;
            }
    }

    str[indexPointer] = '\0';
    printf("%s\n", str) ;

    return 0 ;
}