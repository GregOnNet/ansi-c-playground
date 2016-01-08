#include <stdlib.h>
#include <stdio.h>

// Obergrenze für die Größe des Arrays,
// in dem die Teiler einer einer Zahl gespeichert werden
#define MAX_ANZAHL_TEILER 100

// Ermmittelt Teiler einer Zahl und gibt sie
// als Array zurück
int * ermittleTeiler (int zahl);

// Ermittelt die Summe der Teiler einer Zahl
// und gibt sie zurück
int summiere(int teiler[]);

// Findet befreundete Zahl zu einer gegeben Zahl
void findeBefreundeteZahl(int i, int teilerSumme, int untergrenze, int obergrenze);

int main () {

  int obergrenze,
      untergrenze,
      teilerSumme;

  int * teiler;

  printf("Untergrenze: ");
  scanf("%i",&untergrenze);
  printf("Obergrenze: ");
  scanf("%d",&obergrenze);

  for(int i = untergrenze;i <= obergrenze; i++)
  {
    teiler = ermittleTeiler(i);
    teilerSumme = summiere(teiler);

    findeBefreundeteZahl(i, teilerSumme, untergrenze, obergrenze);
  }
}

int * ermittleTeiler (int zahl) {

  int anzahlDerTeiler = 0;
  int * teilerListe = malloc(sizeof(int) * MAX_ANZAHL_TEILER);

  for(int i = 1; i<zahl; ++i) {

    if(zahl % i == 0)
    {
      teilerListe[anzahlDerTeiler] = i;
      anzahlDerTeiler++;
    }

    if (anzahlDerTeiler == MAX_ANZAHL_TEILER) {
      printf("Die Anzahl der maximalen Teiler (%i) wurde überschritten!", MAX_ANZAHL_TEILER);
      break;
    }
  }

  return teilerListe;
}

int summiere(int teiler[]) {

  int summe = 0;

  for(int i = 0; i < MAX_ANZAHL_TEILER; i++)
  {
    summe += teiler[i];
  }
  return summe;
}

void findeBefreundeteZahl(int zahl, int teilerSumme, int untergrenze, int obergrenze){

  for(int befreundeteZahl = untergrenze;
          befreundeteZahl <= obergrenze;
          befreundeteZahl++)
  {
    int befreundeteTeilerSumme = summiere(
                                   ermittleTeiler(befreundeteZahl));

    if(befreundeteZahl == teilerSumme &&
                  zahl == befreundeteTeilerSumme)

      printf("%i [%i] ist mit %i [%i] befreundet.\n",
        zahl,
        teilerSumme,
        befreundeteZahl,
        befreundeteTeilerSumme);
  }
}
