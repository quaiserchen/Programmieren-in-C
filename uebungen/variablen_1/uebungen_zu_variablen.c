#include <stdio.h>

int main(void) {
	//Aufgabe c)
	int zahl1;
	int zahl2;
	int temp;

	zahl1 = -32768;
	zahl2 = 32767;

	printf("Zahl1 = %d\nZahl2 = %d\n", zahl1, zahl2);

	temp = zahl1;
	zahl1 = zahl2;
	zahl2 = temp;

	printf("\nGetauscht:\nZahl1 = %d\nZahl2 = %d\n", zahl1, zahl2);

//------------------------------------------------------------------------------------------------------------

	//Aufgabe d)
	double buchpreis = 15.95, honorar, buchanzahl;

	//Betrag für verkauftes Buch:
	honorar = buchpreis * 0.05;

	buchanzahl = 1000000 / honorar;

	printf("\nDas Honorar pro Buch ist etwa %.2f € (genau %f€), Die zu verkaufene Buchanzahl zum Millionaer ist %.f.\n", honorar, honorar, buchanzahl);





	system("pause");

	return 0;
}
