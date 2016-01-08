#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void calculateLn2();

int main() {
  bool loopShouldContinue = true;
  char answer[4];

  printf("%f\n", 1 / 10.0);
  printf("%f\n", (1.0%10));

  while (loopShouldContinue) {
    calculateLn2();

    printf("Vorgang wiederholen? (Ja/Nein) ");
    scanf("%4s", &answer);

    if(strncmp(answer, "Ja", 2) != 0) {
      loopShouldContinue = false;
    }
  }

  return 0;
}

void calculateLn2() {
  int n;
  float ln2;

  printf("Über wie viele Iterationen soll ln(2) berechnet werden?\n> ");
  scanf("%i", &n);

  for(int i = 1; i <= n; i++) {
    ln2 += pow(-1.0, i-1) / i;
    printf("%i: -1^(%i-1)/ %i\n", i, i, i);
  }

  printf("\nDie näherungsweise Rechnung ergibt:\n ln(2)=%f\n", ln2);
}
