#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int nächstePrimzahlZu(int prim);
bool istPrim(int zahl);

int main() {

  int x, n;

  int primfaktor = 2;

  printf("Bitte geben Sie eine Zahl ein: ");
  scanf("%i", &x);

  n = x;

  do {

    if(x % primfaktor == 0) {

      x /= primfaktor;
      printf("%i ; ", primfaktor);
    }
    else {
      primfaktor = nächstePrimzahlZu(primfaktor);
    }

  } while(x != 1);

  printf("\n");
  printf("%i\n", istPrim(11));
  return 0;
}

int nächstePrimzahlZu(int prim) {
  int nächstePrim = prim + 1;

  while (istPrim(nächstePrim) == false) {
    nächstePrim++;
  }

  return nächstePrim;
}


bool istPrim(int zahl) {

  int teiler = 2;

  if (zahl == 3 || zahl == 2)
    return true;

  if (!(zahl % teiler))
    return false;
  else
    teiler=3;

  do {

    if (!(zahl % teiler)) return false;
    teiler = teiler + 2;
  } while (teiler <= sqrt(zahl));

  return true;
}
