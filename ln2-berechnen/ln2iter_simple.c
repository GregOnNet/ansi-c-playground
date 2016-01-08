#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main() {
  bool loopShouldContinue = true;
  char answer[4];

  int n;
  float ln2;

  do {
    printf("Über wie viele Iterationen soll ln(2) berechnet werden?\n> ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++) {
      ln2 += pow(-1.0, i-1) / i;
      printf("%i: -1^(%i-1)/ %i\n", i, i, i);
    }

    printf("\nDie näherungsweise Rechnung ergibt:\n ln(2)=%f\n", ln2);
  }
  while(n != 0);

  return 0;
}
