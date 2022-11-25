#include <stdio.h>

int main () {

    int zahl;


    printf("\nBitte geben Sie eine ganze Zahl ein: ");
    scanf("%d", &zahl);

    //1.), 2.), 3.)
    if (zahl < 50) {
        printf("\nDie eingegebene Zahl ist kleiner als Fuenfzig\n");
    } else if (zahl > 50) {
        printf("\nDie eingegebene Zahl ist groesser als Fuenfzig\n");
    } else {
         printf("\nDie eingegebene Zahl ist gleich Fuenfzig\n");
    }

    //4.), 5.)

	int zahl1, zahl2, zahl3, temp;

	printf("\n\nBitte geben Sie 3 Zahlen ein: ");
	scanf("%d%d%d", &zahl1, &zahl2, &zahl3);

	if(zahl1 > zahl2) {
		temp = zahl1;
		zahl1 = zahl2;
		zahl2 = temp;
	}

	if(zahl1 > zahl3) {
		temp = zahl1;
		zahl1 = zahl3;
		zahl3 = temp;
	}

	if(zahl2 > zahl3) {
		temp = zahl2;
		zahl2 = zahl3;
		zahl3 = temp;
	}

	printf("\n\nDie Zahlen von klein nach gross: %d %d %d\n\n", zahl1, zahl2, zahl3);



    system("pause");

    return 0;
}
