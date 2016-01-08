#include <stdio.h>
#include <stdlib.h>

int main() {

  int wert;

  // Mit einem Sternchen wird der Zeiger deklariert.
  // Ein Zeiger referenziert eine Adresse im RAM (Arbeitsspeicher)
  int *zeiger;

  // Wir weisen wert den Wert 5 zu;
  wert = 5;

  // Wir referenzieren die Adresse von wert im zeiger
  zeiger = &wert;

  printf("Speicheradressen\n");
  printf("wert: %p\n", wert);
  printf("zeiger: %p\n\n", zeiger);

  printf("Speicheradressen bei derefrenzierten zeiger\n");
  printf("wert:   %p\n", wert);
  printf("zeiger: %p\n\n", *zeiger);

  printf("Werte bei derefrenzierten zeiger\n");
  printf("wert:   %d\n", wert);
  printf("zeiger: %d\n", *zeiger);

  return 0;
}
