#include <stdio.h>

void funktion(char *str)
{
  // *str   = "H"   => 1
  // *str+1 = "a"   => 2
  // *str+2 = "l"   => 3
  printf("%s\n", str);
}

int main()
{
  // char string[] = "Hallo Welt";
  char *string = "Hallo Welt";

  funktion(string);

  printf("Anfangsadresse auf die *string zeigt = %p\n", string);
  printf("Der Inhalt dieser Anfangsadresse     = %c\n", *string);
  return 0;
}
