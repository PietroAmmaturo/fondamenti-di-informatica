#include <stdio.h>
#define N_MAX_VAL 50
#define VAL_MIN 0
/*esegue la somma dei valori in un array compresi tra due indici */
int main(int argc, char*argv[]) {

	int arr[N_MAX_VAL], tmp, i, val, nval, somma, indiceMinimo, indiceMassimo;

	scanf("%d", &tmp);
	nval = 0;
	while (tmp > VAL_MIN && nval < N_MAX_VAL){
		arr[nval] = tmp;
		nval++;
		scanf("%d", &tmp);
	}


	do
	scanf("%d", &indiceMinimo);
	while (indiceMinimo >= nval || indiceMinimo < 0);

	do
	scanf("%d", &indiceMassimo);
	while(indiceMassimo >= nval || indiceMassimo < indiceMinimo);

	somma = 0;
	for(i = indiceMinimo; i <= indiceMassimo; i++)
		somma = somma + arr[i];

	printf("%d\n", somma);

	return 0;

}
