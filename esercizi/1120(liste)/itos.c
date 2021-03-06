/*sottoprogramma che ricevuto in ingresso un intero restituisce la stringa i cui caratteri sono le cifre del valore in ingresso*/
#include <stdio.h>
#include <stdlib.h>
#define OFFSET '0'
#define BASE 1

int contacifre(int);

char * itos(int val){
	
	char * num;
	int dim, i, pot10;
	
	dim = contacifre(val);
	
	if(num = malloc((dim + 1) * sizeof(char)){
		pot10 = pow(BASE, dim-1);
		for(i = 0; i < dim; i++){
			cifra = val / pot10;
			*(num + i) = cifra + OFFSET;
			val = val % BASE;
			pot10 = pot10 / BASE;
		}
		*(num + i) = '\0';
	} else {
		printf("itos: errore nell'allocare memoria per %d caratteri\n", (dim+1));
	}
	return num;
}

