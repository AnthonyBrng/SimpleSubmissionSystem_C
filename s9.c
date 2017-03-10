#include <stdio.h>

#define LENGTH 100

void printArray(int values[], char title[], int counter );


int main()
{
    int values[LENGTH] ;
    int counter = 0;

    /*
     * Input
     */
    printf("Bitte bis zu 100 ganze Zahlen eingeben:\n");
    for(int err_val=1 ; counter < LENGTH && err_val != EOF; err_val = scanf("%d", &values[counter++]))
        if(err_val == 0)
        {
            printf("Fehler bei der Eingabe.\n");
            return 1;
        }

    printArray(values, "Die zu sortierenden Zahlen: ", counter - 1 );


    /*
     * Sortieren
     */
    for(int i=0, j, lowest_index; i < counter -1 ; i++ )
    {
        for(j = i+1, lowest_index = i ; j < counter -1 ; j++)
            lowest_index = (values[lowest_index] > values[j]) ? j : lowest_index ;

        int tmp = values[i] ;
        values[i] = values[lowest_index];
        values[lowest_index] = tmp ;
    }

    printArray(values, "Die Zahlen sortiert: ", counter - 1);

    return 0 ;
}


/**
 * Prints the Array
 * @param values
 */
void printArray(int values[], char title[], int counter)
{
    printf("%s", title);
    for(int i = 0 ; i<counter ; i++)
        printf("%d ", values[i]);
    printf("\n");
}