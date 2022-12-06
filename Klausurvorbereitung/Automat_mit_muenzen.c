#include <stdio.h>

int main (){

    int eingabe = 0, rest = 1, tempscheine = 0;
    int scheine[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("\nBitte geben Sie den Betrag den Sie abheben wollen ein (maximal 4000 Euro) :");
    scanf("%d", &eingabe);

    if (eingabe > 4000 || eingabe <= 0)
    {
        printf("\nUngueltige Eingabe\n");
    } else {

        for( int i = 0; i < 9; i++ ) {
            tempscheine = eingabe / scheine[i];
            eingabe = eingabe % scheine[i];
            if(i < 6) {
                printf("\nAnzahl der %3d Euro-Scheine : %d", scheine[i], tempscheine);
            } else {
                printf("\nAnzahl der %3d Euro-Münzen  : %d", scheine[i], tempscheine);
            }
        }
    }

    system("pause");

    return 0;

    }
    
