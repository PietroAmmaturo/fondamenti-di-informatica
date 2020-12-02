
#include <stdio.h>
#include <stdlib.h>



#define ORE 24
#define NUM_IMPIEGATI 5


int indexMaxArray(int arr[], int dim);


int main(int argc, char * argv[]){
	int arrivo[NUM_IMPIEGATI];
	int uscita[NUM_IMPIEGATI];
	int ora[ORE];
	int i, j;
	int oradipunta;
	
	for (i = 0; i < ORE; i++)
		ora[i] = 0;
	for (i = 0; i < NUM_IMPIEGATI; i++)
		scanf("%d %d", &arrivo[i], &uscita[i]);
	for (i = 0; i < NUM_IMPIEGATI; i++){
		for (j = arrivo[i]; j < uscita[i]; j++)
			ora[j]++;
		}
	oradipunta = indexMaxArray(ora, ORE);
	printf("%d", oradipunta);
	return 0;
}

int indexMaxArray(int arr[], int dim){
	int i;
	int indexMax, max;
	indexMax = 0;
	max = arr[0];
	for (i = 1; i < dim; i++){
		if (arr[i] > max){
			max = arr[i];
			indexMax = i;
		}
	}
	return indexMax;
}
