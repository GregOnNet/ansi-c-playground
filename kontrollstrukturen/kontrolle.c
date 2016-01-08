#include <stdio.h>

int main() {
  int gekaufteÄpfel, vorhandeneÄpfel;

  int fritzIsst_5_Äpfel = 5;
  int hansIsst_3_Äpfel = 3;

  printf("Wie viele Äpfel haben Fritz und Hans gemeinsam gekauft?\n> ");
  scanf("%i", &gekaufteÄpfel);

  if(gekaufteÄpfel % 8 != 0)
    return 0;

  vorhandeneÄpfel = gekaufteÄpfel;

  printf("Vorhandene Äpfel \t Von Fritz gegessene Äpfel \t Von Hans gegessene Äpfel\n");
  printf("%i \t %i \t %i\n", vorhandeneÄpfel, fritzIsst_5_Äpfel, hansIsst_3_Äpfel);

  while(vorhandeneÄpfel % 8 == 0 &&
        vorhandeneÄpfel > 0) {
    vorhandeneÄpfel -= fritzIsst_5_Äpfel;
    vorhandeneÄpfel -= hansIsst_3_Äpfel;

    printf("%i \t %i \t %i\n", vorhandeneÄpfel, fritzIsst_5_Äpfel, hansIsst_3_Äpfel);
  }
}
