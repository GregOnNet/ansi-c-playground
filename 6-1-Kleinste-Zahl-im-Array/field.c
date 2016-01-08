#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void initialisiereArray(int * array);
void gibKleinstesElementAus(int * array);
void gibMittelwertDesArraysAus(int * array);

#define ArrayGroesse 200

int main() {
  int zahlen[ArrayGroesse];

  initialisiereArray(zahlen);
  gibKleinstesElementAus(zahlen);
  gibMittelwertDesArraysAus(zahlen);
}

void initialisiereArray(int * array) {

  srand(time(NULL));

  for(int i = 0; i < ArrayGroesse; i++) {
    array[i] = rand() % 1000;
  }
}

void gibKleinstesElementAus(int * array) {

  int minimum = array[0];
  int stelle;

  for (int i = 1 ; i < ArrayGroesse ; i++ )
  {
    if ( array[i] < minimum )
    {
      minimum = array[i];
      stelle = i+1;
    }
  }

  printf("Das kleinste Element ist %i und befindet sich an Stelle %i.\n",
    minimum,
    stelle);
}

void gibMittelwertDesArraysAus (int * array)
{
  int summe = 0;
  float mittelwert;

  for (int i = 1 ; i < ArrayGroesse ; i++ )
  {
      summe += array[i];
  }

  mittelwert = summe / (ArrayGroesse * 1.0);

  printf("Der Mittelwert des Arrays lautet: %.2f\n", mittelwert);
}
