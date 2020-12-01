#include <stdio.h>
#include <string.h>
/*Si scriva un sottoprogramma rimuoviDuplicati che ricevuto in ingresso un array di valori interi (e
qualsiasi altro parametro ritenuto strettamente necessario), trasmetta al chiamante un array contenente
i valori dell’array in ingresso privo di duplicati. Prestare particolare attenzione alle informazioni che il
sottoprogramma ed il chiamante si devono scambiare.
Realizzare poi un programma che acquisiti al massimo 50 valori interi strettamente positivi (l’acquisizione termina quando l’utente inserisce un valore negativo o nullo) chiami il sottoprogramma rimuoviDuplicati
e poi visualizzi i valori privi di ripetizioni.
*/
void rimuoviDuplicati(int arr[], int dim, int out[], int *nval);
int main(int argc, char * argv[]){
	int i, n[10], o[10], nval;
	for (i = 0; i < 10; i++)
		scanf("%d", &n[i]);
		
	rimuoviDuplicati(n, 10, o, &nval);
	
	for (i = 0; i < nval; i++)
		printf("%d ", o[i]);
	return 0;
}
void rimuoviDuplicati(int arr[], int dim, int out[], int *nval){
	int i, j, ripetuto;
	*nval = 0;

	for(i = 0; i < dim; i++){
		ripetuto = 0;
		for(j = 0; j < *nval && !ripetuto; j++)
			if(out[j] == arr[i])
				ripetuto = 1;
		if(!ripetuto){
			out[*nval] = arr[i];
		++*nval;
		}
	}
}
