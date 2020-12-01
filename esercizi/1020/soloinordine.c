#include <stdio.h>
#include <string.h>
#define MAX_LEN 20
/*Scrivere un programma che acquisisce una sequenza di al pi`u 20 valori interi, chiedendo all’utente inizialmente
quanti valori vorr`a fornire, num. Il programma acquisisce num valori e memorizza in una opportuna struttura
dati la sequenza di valori i cui elementi sono strettamente crescenti, trascurando i valori che risultano
non essere ordinati. Nella struttura dati, quindi ci sono solo dati ordinati. Al termine dell’acquisizione
il programma visualizza la lunghezza della sequenza, seguita, su una nuova riga, dalla sequenza stessa.
L’utente inserir`a sempre un numero di valori coerente con la richiesta (ossia la quantit`a indicata da num `e
sempre rispettata e num non `e maggiore di 20).
*/
int main(int argc, char * argv[]){
	int arr[MAX_LEN], i, nval, nvalo, val;
	
	scanf("%d", &nval);
	nvalo = 0;
	scanf("%d", &arr[nvalo]);
	for (i = 1; i < nval; i++){
		scanf("%d", &val);
		if (val > arr[nvalo]){
			nvalo++;
			arr[nvalo] = val;
		}
	}
		
		nvalo++;
		printf("%d\n", nvalo);
		for (i = 0; i < nvalo; i++)
			printf("%d", arr[i]);
	 	printf("\n");

	return 0;
}
