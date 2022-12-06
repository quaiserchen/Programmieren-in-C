#include <stdio.h>

int main (){

    int eingabe = 0, rest = 1, tempscheine = 0;
    int scheine[6] = {500, 200, 100, 50, 20, 10};

    printf("\nBitte geben Sie den Betrag den Sie abheben wollen ein (maximal 4000 Euro) :");
    scanf("%d", &eingabe);

    if (eingabe > 4000 || eingabe <= 0 || eingabe % 10 != 0)
    {
        printf("\nUngueltige Eingabe\n");
    } else {

        for( int i = 0; i < 6; i++ ) {
            tempscheine = eingabe / scheine[i];
            eingabe = eingabe % scheine[i];
            printf("\nAnzahl der %d Euro-Scheine : %d", scheine[i], tempscheine);
        }
    }

    system("pause");

    return 0;

    }