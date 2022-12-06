#include <stdio.h>
#include <math.h>

int main (){

    int eingabe = 0;
    float a = 0, b = 0, c = 0, ergebnis = 0;

    printf("\nBitte geben Sie a ein: ");
    scanf("%f", &a);

    printf("\nBitte geben Sie b ein: ");
    scanf("%f", &b);

    printf("\nBitte geben Sie c ein: ");
    scanf("%f", &c);

    printf("\nMenue: Bitte waehlen Sie 1.Volumen, 2.Oberflaeche, 3.Laenge der Diagonalen :");
    scanf("%d", &eingabe);

    switch(eingabe){
        case 1:
            ergebnis = a * b * c;
            printf("\nDas Volumen ist %.2f\n", ergebnis);
        break;
        case 2:
            ergebnis = 2 * (a * b + a * c + b * c);
            printf("\nDie Oberfläche ist %.2f\n", ergebnis);
        break;
        case 3:
            ergebnis = sqrt( a * a + b * b + c * c );
            printf("\nDie Laenge der Diagonalen ist %.2f\n", ergebnis);
        break;
        default:
            printf("\nUngueltige Eingabe!!!\n");
    }

    system("pause");

    return 0;
}
    