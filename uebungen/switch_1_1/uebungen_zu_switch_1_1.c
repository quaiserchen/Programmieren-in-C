#include <stdio.h>

int main () {

    char input;

    printf("\nBitte geben sie einen Buchstaben ein: ");

    scanf("%c", &input);

    if (input == 'a' || input == 'b' || input == 'c') {
        input = input - 32;
    }

    switch(input) {
        case 'A':
        printf("\nKennbuchstabe: %c, Schuelertyp: Berufsschueler\n", input);
        break;
        case 'B':
        printf("\nKennbuchstabe: %c, Schuelertyp: Ganztagsschueler\n", input);
        break;
        case 'C':
        printf("\nKennbuchstabe: %c, Schuelertyp: Schueler zur Abendschule\n", input);
        break;
        default :
        printf("\nUngueltige Eingabe!!!!\n");
        break;
    }

    system("pause");

    return 0;
}
