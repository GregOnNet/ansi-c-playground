#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Prüft ob eine Amstrong-Ziffer ist
bool istAmstrong(int zahl);

// Überführt eine Zahl in ein Array
// 153 => [1, 5, 3]
int * transformiereZahlInArray(int zahl);

// Ermittelt Anzahl der Stellen einer Zahl
// 153 => 3
int ermittleAnzahlDerStellen(int zahl);

// Führt Berechnung der Amstrong-Ziffer aus
int errechneAmstrongZahl(int stellenDerZahl[], int anzahlDerStellen);

int main(){

  int untergrenze,
      obergrenze;

  printf("Untergrenze: ");
  scanf("%i", &untergrenze);

  printf("Obergrenze: ");
  scanf("%i", &obergrenze);

  for(int i = untergrenze; i <= obergrenze; i++)
  {
    if(istAmstrong(i) == true)
    {
      printf("%i ist eine Amstrong-Ziffer\n", i);
    }
  }

  return 0;
}

bool istAmstrong(int zahl){

  int * stellenDerZahl   = transformiereZahlInArray(zahl);
  int   anzahlDerStellen = ermittleAnzahlDerStellen(zahl);
  int   pruefZahl        = errechneAmstrongZahl(stellenDerZahl, anzahlDerStellen);

  return pruefZahl == zahl;
}

int ermittleAnzahlDerStellen(int zahl){

  int anzahlDerStellen = 0;
  float zahlGeteiltDurchZehn = zahl;

  while (zahlGeteiltDurchZehn > 1) {
    zahlGeteiltDurchZehn /= 10.0;
    anzahlDerStellen++;
  }

  return anzahlDerStellen;
}

int * transformiereZahlInArray(int zahl){
  int zahlGeteiltDurchZehn = zahl;
  int anzahlDerStellen = ermittleAnzahlDerStellen(zahl);
  int stellenDerZahl[anzahlDerStellen];

  for(int i = 0; i < anzahlDerStellen; i++)
  {
    stellenDerZahl[i] = zahlGeteiltDurchZehn % 10;
    zahlGeteiltDurchZehn /= 10;
  }

  return stellenDerZahl;
}

int errechneAmstrongZahl(int stellenDerZahl[], int anzahlDerStellen){

  int amstrong = 0;
  for(int i = 0; i < anzahlDerStellen; i++)
  {
    amstrong += pow(stellenDerZahl[i], anzahlDerStellen);
  }

  return amstrong;
}
