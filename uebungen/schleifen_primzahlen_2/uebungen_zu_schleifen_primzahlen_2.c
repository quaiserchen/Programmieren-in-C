// Programm zur Berechnung der Primzahlen zwischen 1 und 1000000
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(int argc, char* argv[])
{
  // Variablen f�r Zeitmessung
  LARGE_INTEGER iFreq;
  LARGE_INTEGER iBegin, iEnd;

  // Initialisierung der Zeitmessung
  QueryPerformanceFrequency(&iFreq);
  printf("Frequency : %20d\n",iFreq.QuadPart);

  // Start der Zeitmessung
  QueryPerformanceCounter(&iBegin);

  // Ermittlung der Primzahlen
  printf("\nDie primzahlen von 2 bis 1 Millionen lauten: ");

  	for (int i = 3; i <= 1000000; i++) {
  		int prim = 1;
  		for (int j = 3; j < sqrt(i) && prim == 1; j++) {
  			if ((i % j) == 0) {
  				prim = 0;
  			}
  		}
  		/* if (prim == 1) {
  			printf(" %d ", i);
  		}*/
  	}


  // Ende der Zeitmessung
  QueryPerformanceCounter(&iEnd);

  // Ausgabe der gemessenen Zeit
  printf("Begin     : %20d\n",iBegin.QuadPart);
  printf("End       : %20d\n",iEnd.QuadPart);
  printf("Difference: %20d\n",iEnd.QuadPart-iBegin.QuadPart);
  printf("Time      : %4.15f s\n",(double)(iEnd.QuadPart-iBegin.QuadPart)/iFreq.QuadPart);

  // Warten auf Tastendruck
  system("pause");
  return 0;
}



