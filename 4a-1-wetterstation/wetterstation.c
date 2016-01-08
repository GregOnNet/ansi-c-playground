#include <stdio.h>

#define	ANZAHL_STAEDTE 2
#define ANZAHL_MESSUNGEN	5

float calcAverage(int messungen[]);

int main() {

  int staedte[ANZAHL_STAEDTE][ANZAHL_MESSUNGEN];

  // Eingabe Temperatur Werte
  for(int i = 0; i < ANZAHL_STAEDTE; i++)
  {
    for(int j = 0; j < ANZAHL_MESSUNGEN; j++)
    {
      printf("Stadt %i: Wert %i/%i\n> ", i+1, j+1, ANZAHL_MESSUNGEN);
      scanf("%d: ", &staedte[i][j]);
    }
  }

  for(int i = 0; i < ANZAHL_STAEDTE; i++)
  {
    printf("Stadt %i: Durchschnittstemperatur = %.2f °C\n",
      i,
      calcAverage(staedte[i]));
  }


  return 0;
}

float calcAverage(int messungen[]) {

  float temperaturSumme = 0;

  for(int i = 0; i < ANZAHL_MESSUNGEN; i++)
  {
    temperaturSumme += messungen[i];
  }

  return temperaturSumme / (ANZAHL_MESSUNGEN * 1.0);
}
