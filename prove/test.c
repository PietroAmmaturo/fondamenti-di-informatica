#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 30

int isanagramma(char [], char []);

int main(int argc, char * argv[])
{
  int ris;
  ris = isanagramma("lago", "goal");
  printf("%d", ris);
  return 0;
}

int isanagramma(char s1[], char s2[])
{
  int cont, anagramma, i, j; /* utilizzo il minimo di memoria possibile, non vi sono array di contatori */
  char c;
  int samestr, samelen;
  
  samelen = strlen(s1) == strlen(s2);
  samestr = !strcmp(s1, s2);
  anagramma = 1;
  if(samelen && !samestr && anagramma) {
    for(i = 0; s1[i] != '\0'; i++) {
      c = s1[i];
      cont = 0;
      for(j = 0; s1[j] != '\0'; j++) {
        if(c == s1[j])
          cont++;
        if(c == s2[j])
          cont--;
      }
      if(cont != 0)
        anagramma = 0;
    } 
  } else
    anagramma = 0;
  return anagramma;
}
