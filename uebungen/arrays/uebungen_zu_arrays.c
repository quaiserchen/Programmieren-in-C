#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	//1.)

	char array1[5] = { 'h', 'a', 'l', 'l', 'o' };

	printf("\nDer array mit den Buchstaben: ");

	for (int i = 0; i < 5; i++) {
		printf(" %c, ", array1[i]);
		if (i == 4) {
			printf("\n\n");
		}
	}

	float array2[10];
	float durchschnitt = 0;
	int temp = 0;

	srand(time(NULL));

	printf("\n\nDie Zahlen lauten: ");

	for (int j = 0; j < 10; j++) {
		array2[j] = (rand() % 99) +1;
		durchschnitt = durchschnitt + array2[j];
		printf(" %.f ", array2[j]);
		if (j == 9) {
			printf("\n");
		}
	}

	durchschnitt = durchschnitt / 10;

	for (int k = 1; k < 10; k++)
	   {
	      for (int l = 0; l < k ; l++)
	      {
	          if (array2[l] > array2[l + 1])
	          {
	              temp = array2[l];
	              array2[l] = array2[l + 1];
	              array2[l + 1] = temp;
	          }
	      }
	   }

	printf("\nDer Durchschnitt ist %.2f\nDer sortierte Array ist : ",
			durchschnitt);

	for (int m = 0; m < 10; m++) {
		printf(" %.f", array2[m]);
		if (m == 9) {
			printf("\n");
		}
	}

	system("pause");

	return 0;

}
