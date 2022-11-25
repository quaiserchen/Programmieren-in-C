#include <stdio.h>

int main(void) {

	int prim = 1;
	int eingabe, test;

	printf("\nBitte geben Sie eine Zahl ein: ");
	scanf("%d", &eingabe);

	for (int i = 3; i < eingabe; i++) {
		if ((eingabe % i) == 0) {
			prim = 0;
		}
	}
	if (prim == 1) {
		printf("\nDie Zahl %d ist eine Primzahl\n", eingabe);
	} else {
		printf("\nDie Zahl %d ist keine Primzahl\n", eingabe);
	}

	system("pause");

	return 0;
}
