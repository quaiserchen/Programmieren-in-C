#include <stdio.h>
#include <stdbool.h>

int main() {

int tag, monat, jahr, sj, ok;

printf("\nBitte geben Sie das Datum tt mm jjjj ein: ");
scanf("%d %d %d", &tag, &monat, &jahr);




if (jahr % 400 == 0 || (jahr % 4 == 0 && jahr % 100 != 0)) {
    sj = 1;
} else {
    sj = 0;
}

printf("\n\n %d %d %d %d\n\n", tag, monat, jahr, sj);

switch (sj) {
    case '0':
    if (0 < monat && monat <= 12) {
        if ( monat == 1 || monat == 3 || monat == 5 || monat == 7 || monat == 8 || monat == 10 || monat == 12) {
            if (0 < tag && tag <= 31) {
                ok = 1;
            }
        } else if (monat == 4 || monat == 6 || monat == 9 || monat == 11) {
            if (0 < tag && tag <=30) {
                ok = 1;
            }
        } else if (monat == 2) {
            if (0 < tag && tag < 28) {
                ok = 1;
            }
        } else {
            ok = 0;
        }
    }
    break;
    case '1':
    if (0 < monat && monat <= 12) {
        if ( monat == 1 || monat == 3 || monat == 5 || monat == 7 || monat == 8 || monat == 10 || monat == 12) {
            if (0 < tag && tag <= 31) {
                ok = 1;
            }
        } else if (monat == 4 || monat == 6 || monat == 9 || monat == 11) {
            if (0 < tag && tag <=30) {
                ok = 1;
            }
        } else if (monat == 2) {
            if (0 < tag && tag < 29) {
                ok = 1;
            }
        } else {
            ok = 0;
        }
    }
}

printf("\n%d.%d.%d  DataOK: %d\n", tag, monat, jahr, ok);



system("pause");

return 0;
}
