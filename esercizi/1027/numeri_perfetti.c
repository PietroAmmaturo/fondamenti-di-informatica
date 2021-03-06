#include <stdio.h>
#include <string.h>
/*Scrivere un programma che riceve in ingresso un array di 10 valori numeri interi. Costruire un nuovo array
dove in corrispondenza di ogni elemento dell’array iniziale si mette:
 0 se l’elemento i `e non strettamente positivo,
 1 se l’elemento i `e un numero perfetto,
 2 se l’elemento i `e abbondante,
 3 se l’elemento i `e difettivo
Per definizione un numero `e perfetto se corrisponde alla somma dei suoi divisori, escluso se stesso; abbondante
se `e minore della somma dei suoi divisori, escluso se stesso; altrimenti `e difettivo.
Ad esempio: 6 e 28 sono perfetti, 12 e 18 sono abbondanti, mentre 8 e 10 sono difettivi.
Il programma visualizza la nuova matrice seguita da a-capo. Inoltre, il programma visualizza il numero di
numeri perfetti, difettivi e abbondanti contenuti nella matrice di origine, separati da spazio e seguiti dal
carattere a-capo a-capo.
Realizzare la propria soluzione organizzandola in sottoprogrammi, come ritenuto pi`u opportuno.
Ingresso/Uscita:
input: 10 valori interi
output: 10 valori interi seguiti da carattere a-capo 3 valori interi
seguiti da carattere a-capo
*/
#define NUMVAL 10
int sommaDivisori(int n);
int main(int argc, char * argv[]){
	int arr[NUMVAL], ris[NUMVAL], i, nPerfetti, nAbbondanti, nDifettivi;
	
	nPerfetti = 0;
	nAbbondanti = 0;
	nDifettivi = 0;
	for( i = 0; i < NUMVAL; i++)
		scanf("%d", &arr[i]);
	
	for( i = 0; i < NUMVAL; i++){
		if (arr[i] <= 0){
			ris[i] = 0;
		}else	{
			if (sommaDivisori(arr[i]) == arr[i]){
						ris[i] = 1;
						nPerfetti++;
					}else	{
						if (sommaDivisori(arr[i]) >= arr[i]){
									ris[i] = 2;
									nAbbondanti++;
								}else{
									ris[i] = 3;
									nDifettivi++;
								}
							}
						}
					}
	for( i = 0; i < NUMVAL; i++)
			printf("%d ", arr[i]);
	printf("\n");
	for( i = 0; i < NUMVAL; i++)
		printf("%d ", ris[i]);
	
	printf("%d %d %d", nPerfetti, nAbbondanti, nDifettivi);
	return 0;
}


int sommaDivisori(int n){
	int half, s, i;
	s = 0;
	half = n/2;
	for(i = 1; i <= half; i++)
		if ((n % i) == 0)
			s = s + i;
	return s;
}


