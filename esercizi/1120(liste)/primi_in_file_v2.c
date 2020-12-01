/*sottoprogramma che ricevuta in ingresso una stringa ne crea e restituisce una nuova al chiamante contenente tutte e sole le vocali presenti nella stringa di ingresso*/
#include <stdio.h>
#include <stdlib.h>

typedef struct _info{
		int * dati;
		int numdati;
} info_t;

int isprime(int);

int * getprimes(char nome[], int * dim){
	FILE * fp;
	int n, val, i;
	info_t * primi;
	
	fp = fopen(nome, "r")
	if(fp){
		n = 0;
		while(fscanf(fp, "%d", &val){
			if(isprime(val)){
				n++;
			}
		}
		fclose(fp);
		if(primi = malloc(n * sizeof(info_t)) && primi->dati = malloc(n * sizeof(int))){
			fp = fopen(nome, "r")
			if(fp){
				i = 0;
				while(fscanf(fp, "%d", &val){
					if(isprime(val)){
						primi->dati = val;
						i++;
					}
				}
				fclose(fp);
			} else {
				printf("fallimento nella riapertura del file");
				free(dati);
				dati = NULL;
				n = 0;
			}
		} else {
					printf("fallimento nell'allocazione della memoria");
					n = 0;
		}
	} else {
			printf("fallimento nell'apertura del file");
			dati = NULL;
			n = 0;
	}
	*dim = n;
	return primi;
}

int isprime(int 
