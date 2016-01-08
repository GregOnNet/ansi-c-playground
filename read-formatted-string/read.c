#include <stdio.h>

int main ()
{
  char sentence[] = "This is a line.";
  char str [20];
  int i;

  sscanf (sentence,"%s",str);

  printf ("%s\n",str);

  return 0;
}
