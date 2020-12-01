#include <stdio.h>
#define NUMBIT 10
#define BASE 2
/*acquisisce 1 intero compreso tra 0 e 1023, scrivere un programma che in base al suo valore calcola e visualizza la sua codifica in base 2*/
int main(int argc, char*argv[]) {
	
	int val, tmp, i;
	int num[NUMBIT];
	
	scanf("%d", &val);
	
	tmp = val;
	i = 0;
	do {
		num[i] =  tmp % BASE;
		tmp = tmp / BASE;
		i++;
		}
	while(n > 0);
	
	for (i=0; i < NUMBIT; i++){
		printf("%d", num[i]);
		}
	
	return 0;

}

