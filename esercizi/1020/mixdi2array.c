#include <stdio.h>
#include <string.h>
#define NVAL 20

/*Scrivere un sottoprogramma che acquisisce due sequenze di valori interi, ciascuna di 20 elementi. Il
programma ordina le due sequenze in senso crescente, quindi visualizza la sequenza dei valori acquisiti, in
senso crescente e senza ripetizioni. Al termine dell’esecuzione, le due sequenze sono ordinate.

*/
int main(int argc, char * argv[]){
	
	int seq[NVAL * 2], j, i, minPos, nrip, nval, nval1, tmp;
	
	nval = 2 * NVAL;
	for (i = 0; i < nval; i++)
		scanf("%d", &seq[i]);
	
	for (i = 0; i < nval; i++)
		printf("%d ", seq[i]);
	printf("\n");
	
	nval1 = nval -1;
	for (i = 0; i < nval1; i++){
		minPos = i;
		for (j = i + 1; j < nval; j++)
			if (seq[j] < seq[minPos])
				minPos = j;
		tmp = seq[i];
		seq[i] = seq[minPos];
		seq[minPos] = tmp;
	}
	
	for (i = 0; i < nval; i++)
		printf("%d ", seq[i]);
	printf("\n");
		
	nrip = 0;
	for (i = 0; i < nval; i++){
		j = i - nrip;
		if (seq[i] == seq[i+1])
			nrip++;
		seq[j] = seq[i];
	}
	
	nval = nval - nrip;
	for (i = 0; i < nval; i++)
		printf("%d ", seq[i]);
	printf("\n");
	return 0;
}
