#include <stdio.h>
#define N_MAX_VAL 50
#define VAL_MIN 0
/*scambia i valori a due a due in un array di 50 posti*/
int main(int argc, char*argv[]) {

	int arr[N_MAX_VAL], tmp, i, val, nval, valoreLimiteScambio;

	scanf("%d", &tmp);
	nval = 0;
	while (tmp > VAL_MIN && nval < N_MAX_VAL){
		arr[nval] = tmp;
		nval++;
		scanf("%d", &tmp);
	}

	valoreLimiteScambio = nval - 1;
	for(i = 0; i < valoreLimiteScambio; i = i + 2){
			tmp = arr[i];
			arr[i] = arr [i+1];
			arr[i + 1] = tmp;
		}

	for(i = 0; i < nval; i++)
		printf("%d\n", arr[i]);

	return 0;

}
