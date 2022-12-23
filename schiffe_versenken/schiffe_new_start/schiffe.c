#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

	int spielfeldOutput(int feld[10][10]) {
        printf(GREEN"        1    2    3    4    5    6    7    8    9   10  \n"RESET);

        printf(GREEN"     +--------------------------------------------------+\n"RESET);

        for (int i = 0; i < 10; i++){
            printf(GREEN"  %2d |"RESET, i+1);
            for (int j = 0; j < 10; j++){
                if(feld[i][j] == 2){
                    printf(BLUE"  -  "RESET);
                } else if (feld[i][j] == 1){
                    printf(RED"  X  "RESET);
                } else {
                    printf(YELLOW"  O  "RESET);
                }
            }
            printf(GREEN"|\n"RESET);
        }
        printf(GREEN"     +--------------------------------------------------+\n"RESET);
	}

    int spielerTipp(int tipp[2], int spielfeld[10][10]) {
        int tippOkay = 0, tempx = 0, tempy = 0;
        while(tippOkay == 0 ) {
            int xOkay = 0, yOkay = 0;
		    printf("Bitte Koordinaten eingeben:\n");
            //eingabe von X bis wert gültig
            while (xOkay == 0) {
                printf("horizontal: ");
                scanf("%d", &tempx);
                if(tempx < 1 || tempx > 10) {
                printf("\nFEHLER! Nur Zahlen von 1-10 sind erlaubt!!\n");
                } else {
                    xOkay = 1;
                }
            }
            while (yOkay == 0) {
                printf("vertikal: ");
                scanf("%d", &tempy);
                if(tempy < 1 || tempy > 10) {
                printf("\nFEHLER! Nur Zahlen von 1-10 sind erlaubt!!\n");
                } else {
                    yOkay = 1;
                }
            }
            tempx--;
            tempy--;
            if(spielfeld[tempx][tempy] == 0) {
                tippOkay = 1;
            } else {
                printf("\nFEHLER! Dieses Feld wurde bereits getippt!\n");
            } 
        }
        tipp[0] = tempx;
        tipp[1] = tempy;
		return tipp;
	}
	
	int isItAHit(int tipp[2], int schiffe[10][10], int spielfeld[10][10]) {

		if (schiffe[tipp[0]][tipp[1]] == 1) {
			spielfeld[tipp[0]][tipp[1]] = 1;
		} else if (schiffe[tipp[0]][tipp[1]] == 0) {
			spielfeld[tipp[0]][tipp[1]] = 2;
		}
		return spielfeld[10][10];
	}

    int placeAship(int schiffe[10][10], int l, int randomizer) {
        int laengen[4] = {2, 3, 4, 5};
        int r = 11 - laengen[l];
        int schiffGesetzt = 0, platzBelegt = 0;
        int loop= 0;
        while (schiffGesetzt == 0) {
            loop++;
            srand(time(0) * randomizer);
            int x = rand() % r, y = rand() % r;
            int d = rand() % 2;
            if(d == 0) {     //horizontal
                for (int i = y; i < (y + laengen[l]); i++) {
                    if(schiffe[x][i] != 0) {
                        platzBelegt = 1;
                        randomizer= randomizer * randomizer;
                    } else {
                        schiffe[x][i] = 1;
                    }
                }
            } else {                //vertikal
                for (int i = x; i < (x + laengen[l]); i++) {
                    if(schiffe[y][i] != 0) {
                        platzBelegt = 1;
                        randomizer= randomizer * randomizer;
                    } else {
                        schiffe[i][y] = 1;
                    }
                }
            }
            if(platzBelegt == 0) {
                schiffGesetzt = 1;
            }
        
        }
        return schiffe[10][10];
    }
	
 int main() { 

    /* 4 2er, 3 3er, 2 4er, 1 5er*/

    int getroffen = 0, versuche = 10; 
	int tipp[2];
	int spielfeld[10][10] = {0}; 
	int schiffe[10][10] = {0};

	
	printf(GREEN"\n\nSchiffe versenken, die simple Konsolenversion 1.0\n\n"RESET);
	
  
    placeAship(schiffe, 1, 3);
    placeAship(schiffe, 1, 4);
    placeAship(schiffe, 0, 5);
    placeAship(schiffe, 0, 6);
    placeAship(schiffe, 0, 7);

	spielfeldOutput(spielfeld);
	

    while(versuche > 0 && getroffen < 10) {
        spielerTipp(tipp, spielfeld);
        if(schiffe[tipp[0]][tipp[1]] == 1){
            getroffen =  getroffen + 1;
        } else {
            versuche = versuche -1;
        }
	    isItAHit(tipp, schiffe, spielfeld);
	
	    spielfeldOutput(spielfeld);
        printf("\nrestliche Versuche: %d, bisherige Treffer : %d/10\n", versuche, getroffen);
    }

    if (getroffen == 10) {
        printf("\nGratulation, du hast gewonnen!!!!\n\n\n");
    } else {
        printf("\nSchade, beim nächsten mal wirds besser!\n\n\n");
    }
    
}