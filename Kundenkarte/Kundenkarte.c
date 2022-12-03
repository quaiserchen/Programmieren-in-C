
#include <stdio.h>
/* Eingabe: Bisherige Karte, Jahresumsatz */
/* 3 umsatzstufen: < 500, 500 < 1000, 1000 < */
/* Wenn bessere neue Karte -> Gutschein damit berechnen, wenn schlechter, mit bisheriger berrechnen */
/* Gutschein Berechen S 2% P 3% V 5% */
/* Ausgabe vom Gutschein, neuer Kartentyp */

int main(void) {

	float umsatz = 0, gutschein = 0;
	char karte, neuekarte;

	printf("\nBitte geben Sie ihren Jahresumsatz und ihren bisherigen Kartentyp ein (S -> Standart, P -> Plus, V -> VIP):  ");
	scanf("%f %c", &umsatz, &karte);
	
	/* Neuer Kartentyp wird errechnet */

	if (umsatz <= 500){
		neuekarte = 'S';
		printf("\nIhre neue Karte ist die Standart-Karte\n");	
	} else if (umsatz > 500 && umsatz < 1000){
		neuekarte = 'P';
		printf("\nIhre neue Karte ist die Plus-Karte\n");	
	} else {
		neuekarte = 'V';
		printf("\nIhre neue Karte ist die VIP-Karte\n");	
	}




	



	system("pause");

	return 0;
}
