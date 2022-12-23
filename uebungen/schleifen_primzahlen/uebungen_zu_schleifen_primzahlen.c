#include <stdio.h>
#include <math.h>

int main(void) {

	int eingabe =  0;
	int teiler_gefunden = 0;
	float wurzel = 0;
	float tester = 0;
	int teiler = 2;

	printf("Zahl eingeben: ");
	scanf("%d", &eingabe);

	wurzel = sqrt(eingabe);

	while(teiler_gefunden == 0 && tester <= wurzel) {
		tester = eingabe % teiler;
		if (tester == 0){
			teiler_gefunden = 1;
			
		}
		teiler++;
	}

	if (teiler_gefunden = 0){
		printf("\n%d ist eine Primzahl\n", eingabe);
	} else {
		printf("\n%d ist keine Primzahl\n", eingabe);
	}

	system("pause");

	return 0;
}
