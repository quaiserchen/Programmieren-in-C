
#include <stdio.h>

int main() {

	float netto, brutto, steuer, rabatt;

	printf("\nBitte geben Sie den Nettopreis in Euro und den Mehrwertsteuersatz in Prozent ein: ");
	scanf("%f %f", &netto, &steuer);

	steuer=steuer/100;

	brutto=(steuer+1)*netto;
	rabatt=netto*steuer;
	printf("Bei einem Nettopreis von %.2f Euro und einem Mehrwertsteuersatz von %.2f ergibt sich ein Nettopreis von %.2f Euro und ein Rabattsatz von %.2f Euro\n", netto, steuer, brutto, rabatt);


    system("pause");

    return 0;
}
