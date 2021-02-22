
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct occ_s{

	char c;
	int nocc;
} occ_t;

occ_t * conta(char [], char []);

int main(int argc, char * argv[]){

	char * info;
	char * cars;
	occ_t * occs;
	int i;

	if(argc == 3){

		info = argv[1];
		cars = argv[2];

		if((occs = conta(info, cars))){

			for(i = 0; cars[i] != '\0'; i++){

				printf("%c %d\n", occs[i].c, occs[i].nocc);
			}
		}
	}
	else{
		printf("%s richiede in ingresso una stringa.\n", argv[0]);
	}

	return 0;
}

occ_t * conta(char info[], char cars[]){

	occ_t * occs = NULL;
	int nchars, i, j, stop;

	nchars = strlen(cars);

	if( (occs = malloc(nchars * sizeof(occ_t)) ) ){

		for(i = 0; i < nchars; i++){

			occs[i].c = cars[i];
			occs[i].nocc = 0;
		}

		for(i = 0; info[i] != '\0'; i++){

			stop = 0;

			for(j = 0; j < nchars && !stop; j++){

				if(info[i] == occs[j].c){
					occs[j].nocc++;
					stop = 1;
				}
			}
		}
	}
	else{
		printf("errore allocazione memoria per %d contatori", nchars);
	}

	return occs;
}

