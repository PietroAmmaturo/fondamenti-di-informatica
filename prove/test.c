#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 30

int cercacerniera (char s1[], char s2[])
{
  int i, j;
  int len2;
  int index, valida;
  
  len2 = strlen(s2);
  index = 0;
  for (i = len2; i > 0; i--)
    if (s1[0] == s2[i]) {
      valida = 1;
      for (j = 0; s2[j + i] != '\0' && valida; j++)
        if (s1[j] != s2[j + i])
          valida = 0;
      if (valida)
        index = len2 - i;
      printf("%d", index);
    }
  printf("%d", index);
  if (index)
    return index;
  else
    return -1;
}

char * cerniera (char s1[], char s2[])
{
  char * new;
  int i, len1, len2, start, len;

  start = cercacerniera(s1, s2);
  if (start > 0) {
    len1 = strlen(s1) - start;
    len2 = strlen(s2) - start;
    len = len1 + len2;
    if(new = malloc(sizeof(char) * (len + 1))) {
      *(new + len) = '\0';
      for(i = 0; i < len1; i++)
        *(new + i) = s1[i + start];
      for(i = 0; i < len2; i++)
        *(new + i + len1) = s2[i];
    } else
      printf("errore malloc");
    return new;
  }
  return NULL;
}

int main(int argc, char * argv[])
{
  char * ris;

  if(argc == 3) {
    ris = cerniera(argv[1], argv[2]);
    printf("%s", ris);
    free (ris);
  } else
    printf("si aspettano 2 stringhe da riga di comando");
  return 0;
}
