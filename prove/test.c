#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BASE 10

int cifraMaggiore(int val);

int main (int argc, char*argv[])
{
  int i;
  int num;
  int a;
  
  num = 0;
  for(i = 0; *(argv[1] + i) != '\0'; i++){
    num += *(argv[1] + i);
    num = num * BASE;
   }
  printf("%d", cifraMaggiore(num));
  return 0;
}


int cifraMaggiore(int val)
{
  int cifra, max;
  if (val)
    max = cifraMaggiore(val/BASE);
  cifra = val % BASE;
  if (cifra > max)
    max = cifra;
  return max;
}
