#include <stdio.h>

int main () {

    int versuche = 10;
    int spielfeld[8][8]= {0};
    char schiff1hits[3] = {' ', ' ', ' '}, schiff2hits[4] = {' ', ' ', ' ', ' '};

    printf("SCHIFFE VERSENKEN\n\n");

    printf("Es sind 2 Schiffe versteckt, Sie haben insgesammt 10 Versuche, die Schiffe zu versenken\nForm der Schiffe: ( )( )( ) | ( )( )( )( )\n\n");

    //Schiff 1
    spielfeld[3][3] = 2;
    spielfeld[3][4] = 2;
    spielfeld[3][5] = 2;

    //Schiff 2
    spielfeld[7][5] = 2;
    spielfeld[7][6] = 2;
    spielfeld[7][7] = 2;
    spielfeld[7][4] = 2;


        //-------------Spielfeld---------------
        printf("       A    B    C    D    E    F    G    H  \n");

        printf("    +----------------------------------------+\n");

        for (int i = 0; i < 8; i++){
            printf("  %d |", i+1);
            for (int j = 0; j < 8; j++){
                if(spielfeld[i][j] == 1){
                    printf("  -  ");
                } else if (spielfeld[i][j] == 2){
                    printf("  X  ");
                } else {
                    printf("  O  ");
                }
            }
            printf("|\n");
        }

    

    printf("    +----------------------------------------+\n");

    printf("Trefferanzeige: (%c)(%c)(%c) | (%c)(%c)(%c)(%c)\n", schiff1hits[0], schiff1hits[1], schiff1hits[2], schiff2hits[0], schiff2hits[1], schiff2hits[2], schiff2hits[3]);





    system ("pause");

    return 0;
}