#include <stdio.h>
#include <string.h>

#define MAX_LEN 25
#define MAX_PAR 20
typedef struct {
	char parola[MAX_LEN];
}stringa_s;
/*Scrivere un programma che acquisisce un valore intero strettamente positivo num, che rappresenta il numero
di parole (ciascuna di al pi`u 25 caratteri) che verranno poi fornite, e che comunque non saranno mai pi`u di
20. Il programma acquisisce le num parole e le visualizza, una per riga, all’interno di un rettangolo creato
dal carattere *.*/
int main(int argc, char * argv[])
{
	stringa_s elenco[MAX_PAR];
	int num;
	int i, j, len, lendiff;
	do {
		scanf("%d", &num);
	} while (num < 0);
	
	for (i = 0; i < num; i++)
		scanf("%25s", elenco[i].parola);
	
	for (i = 0; i < MAX_LEN; i++)
		printf("*");
	printf("\n");
	
	for (i = 0; i < num; i++){
		len = strlen(elenco[i].parola);
		lendiff = MAX_LEN - len;
		printf("*");
		printf("%s", elenco[i].parola);
		for (j = 0; j < lendiff; j++)
			printf(" ");
		printf("*\n");
	}
	
	for (i = 0; i < MAX_LEN; i++)
		printf("*");
	printf("\n");
	
	return 0;
}
