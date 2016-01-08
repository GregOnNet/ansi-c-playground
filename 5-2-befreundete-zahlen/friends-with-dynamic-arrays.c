#include <stdlib.h>
#include <stdio.h>

int * ermittleEchteTeiler (int zahl);
int summiereEchteteiler(int teiler[]);

int main () {

  int obergrenze;
  int untergrenze;

  int * teiler;
  //
  // printf("Untergrenze: ");
  // scanf("%i",&untergrenze);
  // printf("Obergrenze: ");
  // scanf("%d",&obergrenze);

  teiler = ermittleEchteTeiler(12);
}

int * ermittleEchteTeiler (int zahl) {
  int teiler = 2;

  int anzahlDerTeiler = 1;
  int *tempTeiler = malloc(anzahlDerTeiler * sizeof *tempTeiler);
  int *teilerListe;

  while(teiler <= zahl) {

   if(zahl % teiler == 0)
   {
     tempTeiler[anzahlDerTeiler - 1] = teiler;
     anzahlDerTeiler++;
     teilerListe = realloc(tempTeiler, anzahlDerTeiler * sizeof *teilerListe);

     printf("%i, länge des arrays %i\n", teilerListe[anzahlDerTeiler -1], anzahlDerTeiler);
     zahl /= teiler;
   }
   else
     teiler++;
  }

  return teilerListe;
}
