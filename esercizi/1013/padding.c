#include <stdio.h>

int main(int argc, char*argv[]) {
	
	int num, k, i, tmp, cont;
	

	do
	scanf("%d", &num);
	while (num <= 0);
	
	do
	scanf("%d", &k);
	while (k <= 0);
	
	tmp = num;
	cont = 1;
	while (tmp > 0){ /* numero di cifre di tmp*/
		cont++;
		tmp = tmp / BASE;
		}
	if (cont < k) { /* indenta il numero con tanti zeri a sinistra quanti mancano per raggiungere k cifre*/
		for(i = 0;i < k - cont; i++)
			printf("0");
		printf("%d", num);
	}
	else
		printf("%d\n", num);
	
	return 0;

}

