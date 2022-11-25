#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {

    double umfang, flaeche, volumen, radius;

    printf("\nBitte geben Sie einen Radius ein: ");
    scanf("%lf", &radius);

    umfang = 2 * M_PI * radius;
    flaeche = M_PI * pow(radius, 2);
    volumen = M_PI * pow(radius, 3) * (1.333333);
//
//    printf("==============================================================================================\n");
//    printf("||\t*Umfang*\t||\t*Flaeche*\t||\t*Volumen*\t||\n");
//    printf("||\t%.3lf\t||\t%.3lf\t||\t%.3lf\t||\n", umfang, flaeche, volumen);

    printf("\n===============================================\n");
    printf("||\t*Umfang*\t||\t\t%.3lf\t\t||\n", umfang);
    printf("||\t*Flaeche*\t||\t\t%.3lf\t\t||\n", flaeche);
    printf("||\t*Volumen*\t||\t\t%.3lf\t\t||\n", volumen);
    printf("\n===============================================\n");
    system("pause");

    return 0;
}
