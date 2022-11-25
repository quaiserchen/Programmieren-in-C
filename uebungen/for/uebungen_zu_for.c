

#include <stdio.h>

int main () {

	printf("\nZahlending\n");

	for (int i=10; i>=0; i--) {
		for (int j=i; j>=0; j--) {
			printf(" %d ", j);
		}
		printf("\n");
	}



    system("pause");

    return 0;
}

