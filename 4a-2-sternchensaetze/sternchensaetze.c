#include <stdio.h>

#define MAX_BUCHSTABEN 5

int main() {

  char satz[MAX_BUCHSTABEN];
  char crypt[MAX_BUCHSTABEN];

  for(int i=0; i<MAX_BUCHSTABEN; i++) {
   scanf('%s', &satz[i]);
  }

  for(int i=0; i<MAX_BUCHSTABEN; i++) {

    if(satz[i] == ' ' || satz[i] == '.')
      crypt[i] = satz[i];
    else
      crypt[i] = '*';
  }

  printf('%s => $s', satz, crypt);

  return 0;
}
