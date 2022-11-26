#include <stdio.h>

int main () {

    int versuche = 10, versuch = 0;
    int spielfeld[8][8]= {0};
    int schifffeld[8][8]= {0};
    char schiff1hits[3] = {' ', ' ', ' '}, schiff2hits[4] = {' ', ' ', ' ', ' '};
    int tippx = 0;
    int tippy = 0;
    int tipps[10][2] = {0};
    


    printf("SCHIFFE VERSENKEN\n\n");

    printf("Es sind 2 Schiffe versteckt, Sie haben insgesammt 10 Versuche, die Schiffe zu versenken\nForm der Schiffe: ( )( )( ) | ( )( )( )( )\n\n");

    //Schiff 1
    schifffeld[3][3] = 2;
    schifffeld[4][3] = 2;
    schifffeld[5][3] = 2;

    //Schiff 2
    schifffeld[2][7] = 2;
    schifffeld[2][6] = 2;
    schifffeld[2][5] = 2;
    schifffeld[2][4] = 2;

     printf("Bitte geben Sie Ihren Tipp ein, erst x, dann y:  ");

    scanf("%c", &tippx);
    scanf("%d", &tippy);

    if(schifffeld[tippx-1][tippy-1] == 2) {
        spielfeld[tippx-1][tippy-1] == 2;
        tipps[versuch][0] = tippx;
        tipps[versuch][1] = tippy;
    }


        //-------------Spielfeld---------------
        printf("                  <-----xx---->                  \n");
        printf("       1    2    3    4    5    6    7    8  \n");

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

    

    


    printf("Ihre Versuche: %d, ihre bisherigen Tipps: ", versuche);

    



    system ("pause");

    return 0;
}