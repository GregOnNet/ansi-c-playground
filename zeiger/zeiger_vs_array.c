#include <stdio.h>

int main()
{
  int element[8]= {1,2,4,8,16,32,64,128};
  int *ptr;
  int i;

  // Adresse des Arrays element dem pointer zuweisen.
  // Laut ANSI-C zeigt der array-name immer auf das erste Element.
  // ptr = element === ptr = &element[0]
  ptr = element;

  printf("Der Wert auf den *ptr zeigt ist %d\n\n"   , *ptr);
  printf("Durch *ptr+1 zeigt er jetzt auf %d\n\n"   , *(ptr+1));
  printf("Durch *ptr+3 zeigter er dann auf = %d\n\n", *(ptr+3));

  printf("\nJetzt alle zusammen : \n");

  for(i=0; i<8; i++)
    printf("element[%d]=%d \n",i,*(ptr+i));

  return 0;
}
