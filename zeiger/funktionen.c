#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592f

void berechneKreisfläche(float *radius) {

  *radius = ( (*radius) * (*radius) * PI);
}

int main() {

  float eingabe;

  printf("Berechnung der Kreisfläche\n");
  printf("Bitte geben Sie den Radius ein:\n> ");
  scanf("%f", &eingabe);

  berechneKreisfläche(&eingabe);

  printf("Die Fläche des Kreises beträgt %f.\n", eingabe);

  return 0;
}
