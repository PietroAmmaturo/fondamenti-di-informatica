#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "./stock_price.dat"
#define MAX_LEN 50
#define DAYS 7

typedef struct azione{
	char nome[MAX_LEN + 1];
	float prezzi[DAYS];
} azione;

int main (int argc, char * argv[]){
	azione stock;
	int numAzioni, a, d;
	FILE * fo;
	
	if(fo = fopen(FILE_NAME, "wb")){
		scanf("%d", &numAzioni);
		for(a = 0; a < numAzioni; a++) {
			scanf("%s", stock.nome);
			for (d = 0; d < DAYS; d++)
				scanf("%f", &stock.prezzi[d]);
			fwrite(&stock, sizeof(azione), 1, fo);
		}
		fclose(fo);
	} else {
		printf("Errore nell' apertura del FILE_NAME: %s", FILE_NAME);
	}
	return 0;
}

