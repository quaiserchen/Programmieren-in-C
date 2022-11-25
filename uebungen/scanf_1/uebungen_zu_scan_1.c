#include <stdio.h>

int main() {

    int zahl1, zahl2, zahl3, zahl4;
    char buchstabe1, zeichen1, zeichen2;
    float fliessz1;

    //a.)
    printf("\nBitte Zahl eingeben: ");
    scanf("%d", &zahl1);

    //b.)
    printf("\nBitte zwei Zahlen eingeben: ");
    scanf("%d %d", &zahl2, &zahl3);
    //c.)
    printf("\nBitte eine Zahl und einen Buchstaben eingeben: ");
    scanf("%d %c", &zahl4, &buchstabe1);

    //d.)
    printf("\nBitte eine Fließkommazahl, das Zeichen '-' und ein beliebiges Zeichen eingeben: ");
    scanf("%f %c %c", &fliessz1, &zeichen1, &zeichen2);

    //Ausgabe

    printf("\na.)\nDie Zahl ist : %d\nb.)\nDie Zahlen sind: %d, %d\nc.)\nZahl: %d, Buchstabe %c\nd.)Eingaben: %f, %c, %c\n", zahl1, zahl2, zahl3, zahl4, buchstabe1,  fliessz1, zeichen1, zeichen2);



    system("pause");

    return 0;
}
