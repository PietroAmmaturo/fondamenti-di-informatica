/*Scrivere un sottoprogramma rot che ricevuta in ingresso una stringa voc, un numero intero senz’altro positivo n ed un intero dir (che
vale senz’altro solo 0 o 1), la modifica in modo tale che la stringa finale sia quella iniziale, fatta scorrere di n posizioni a sinistra se dir vale 0,
a destra se dir vale 1. con gli ultimi n caratteri riportati in testa. Se per esempio la stringa iniziale è Esempio ed n è 1 e dir è 1, la stringa
finale sarà oEsempi. Data la stringa iniziale Fondamenti, n pari a 4 e dir pari a 0, la stringa finale è amentiFond.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

char *rot(char voc[], int n, int dir);

int main(){

	int n, dir;
	char voc[MAX];
	char rioContra;

	scanf("%s", voc);
	scanf("%d", &n);
	scanf("%d", &dir);

	rioContra = *rot(voc, n, dir);

	printf("%s\n", rioContra);
	
}

char *rot(char voc[], int n, int dir){

	int i, dim;
	dim = strlen(voc);
	if(dir == 0){
		for(i = 0; voc[i] != '\0'; i++){
			voc[i] = voc[i + n];
			if((i + n) > dim){
				voc[i] = voc[i - n];
			}
		}
	} else if(dir == 1){
		for(i = 0; voc[i] != '\0'; i++){
			voc[i] = voc[i - n];
			if((i - n) < 0){
				voc[i] = voc[i + n];
			}
		}
	}
	return voc;
}