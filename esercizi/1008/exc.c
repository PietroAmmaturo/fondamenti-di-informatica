/*caratteri e array di contatori*/
#include <stdio.h>
#define NMAX 50

/*acquisisce 50 valori al massimo, si ferma quando viene inserito un valore negativo, una volta acqisiti i dati, analizzo i dati e se non ci sono numeri primi visualizzo 1, altrimenti 0*/
int main(int argc, char*argv[]) {
	
	int val[NMAX];
	int i, dim;
	int noprimi, isdiv, half, div;
	
	i = 0;
	dim = 0;
	
	scanf("%d", &val[0]);
	while(val[dim] > 0){
		val[dim] = num;
		dim++;
		scanf("%d", &val[dim]);
		}
		
	noprimi = i;
	for(i = 0; i < dim && noprimi == 1; i++){
		if(!(val[i] == 1 || val[i]%2 == 0 val[i] != 2)){	/*se val[i] è diverso da uno, non è pari, ma può essere 2 */
			half = val[i] / 2;
			isdiv = 0;
			for(div = 3; div < half && isdiv ==0 ; div = div +2)
				if(val[i] % div == 0)
					isdiv = 1;
				if(!isdiv) /* isdiv == 0 */
					noprimi = 0;
		}
	}
		return 0;
}

