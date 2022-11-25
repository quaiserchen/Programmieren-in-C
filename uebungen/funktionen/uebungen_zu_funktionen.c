#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float Umfang(float var) {
	return 2 * M_PI * var;
}

float Flaeche(float var) {
	return M_PI * pow(var, 2);
}

float Volumen(float var) {
	return M_PI * pow(var, 3) * (1.333333);
}

int main() {

	int auswahl;
    float radius, umf, flae, vol;

    printf("\nBitte geben Sie einen Radius ein: ");
    scanf("%lf", &radius);

    printf("\nWas m�chten Sie berechnen?\n1.Flaeche\n2.Umfang\n3.Volumen\nBitte 1, 2, 3 eingeben: ");
    scanf("%d", &auswahl);

    switch(auswahl){
    case 1: ("\nDie Flaeche ist %");
    }





    return 0;
}
