#include <stdio.h>

int main(void) {

	float umsatz = 0, gutschein = 0;
	char karte, neuekarte;

	printf("\nBitte geben Sie ihren Jahresumsatz und ihren bisherigen Kartentyp ein (S -> Standart, P -> Plus, V -> VIP):  ");
	scanf("%f %c", &umsatz, &karte);
	
	/* Neuer Kartentyp wird errechnet */

	if (umsatz < 500){
		neuekarte = 'S';
		printf("\nIhre neue Karte ist die Standart-Karte\n");	
	} else if (umsatz >= 500 && umsatz < 1000){
		neuekarte = 'P';
		printf("\nIhre neue Karte ist die Plus-Karte\n");	
	} else {
		neuekarte = 'V';
		printf("\nIhre neue Karte ist die VIP-Karte\n");	
	}

    if (neuekarte == 'V' || karte == 'V'){
        gutschein = umsatz * 0.05;
        printf("Ihr Bonus betraegt 5 Prozent und Ihr Gutschein %.2f.\n", gutschein);
    } else if (neuekarte == 'P' || karte == 'P') {
        gutschein = umsatz * 0.03;
        printf("Ihr Bonus betraegt 3 Prozent und Ihr Gutschein %.2f.\n", gutschein);
    } else {
        gutschein = umsatz * 0.02;
        printf("Ihr Bonus betraegt 2 Prozent und Ihr Gutschein %.2f.\n", gutschein);
    }

	system("pause");

	return 0;
}