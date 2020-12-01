#include <stdio.h>
#include <string.h>
/*Si scriva un programma che ricevuti in ingresso al massimo 50 numeri interi positivi (l’acquisizione termina
quando l’utente inserisce un valore negativo o nullo) calcoli, memorizzi e poi visualizzi (mediante il
sottoprogramma calcolaMinori) per ognuno dei numeri ni quanti degli altri valori inseriti siano minori
di ni
. Il programma principale al termine dell’elaborazione dovr`a avere a disposizione tutti i numeri minori,
non deve solo visualizzar*/
#define NUM_MAX_VAL 50
void calcolaMinori(int *, int, int *);
int main(int argc, char * argv[]){
	int numeri[NUM_MAX_VAL], numeroMinori[NUM_MAX_VAL] = {0};
	int val, i, numeroValori;
	
	scanf("%d", &val);
	numeroValori = 0;
	while (val > 0){
		numeri[numeroValori] = val;
		scanf("%d", &val);
		numeroValori++;
	}

	calcolaMinori(numeri, numeroValori, numeroMinori);
	
	for(i = 0; i < numeroValori; i++)
		printf("%d", numeroMinori[i]);
			
	return 0;
}
void calcolaMinori(int numeri[], int numeroValori, int numeroMinori[]){
	int i, j;
	for(i = 0; i < numeroValori; i++){
		numeroMinori[i] = 0;
		for(j = 0; j < numeroValori; j++)
			if (numeri[j] < numeri[i])
				numeroMinori[i]++;
	}
}
