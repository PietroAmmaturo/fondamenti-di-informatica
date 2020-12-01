#include <stdio.h>
#define NVAL 10
/* dato un array di 10 valori trovare le combinazioni che sommate danno num come risultato, non ci riesco.*/
int combinazioni(int arr[], int dim, int num);
int main(int argc, char * argv[]){
	int i, arr[NVAL], num;
	
	scanf("%d", &num);
	for(i = 0; i < NVAL; i++)
		scanf("%d", &arr[i]);
	
	printf("%d\n", combinazioni(arr, NVAL, num));
	return 0;
}

int combinazioni(int arr[], int dim, int num){
	int ris = 0;
	int i;
	
	for(i = 1; i < dim; i++)
		if((arr[0] + arr[i]) == num){
				ris++;
			}
	if (dim >= 2)
		return ris += combinazioni(&arr[1], dim - 1, num);
	else
		return ris;
}

int sommaArray(int arr[], int dim){
	int s;
	for(int i = 0; i < dim; i++)
		s += arr[i];
	return s;
}

int contaSommaArray(int arr[], int  dim, int num){
	int cont;
		for(i = 0; i < dim; i++)
			for(j = 0; j != i; j++)
				if (sommaArray(arr[i], dim[j]) == num)
					cont++;
		return cont;
}


