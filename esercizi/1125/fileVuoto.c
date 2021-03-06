
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*Scrivere un sottoprogramma fileVuoto che ricevuti in ingresso il nome inclusa l’estensione di un file di
testo ASCII e il suo percorso nel file system restituisce 1 se il file e vuoto, 0 altrimenti.*/
int fileVuoto(char nome[], char percorso[]);

int main(int argc, char * argv[]){
	char n[20];
	char p[20];
	
	scanf("%s%s", n, p);
	
	printf("%d", fileVuoto(n, p));
	
return 0;
}


int fileVuoto(char nome[], char percorso[]){
	
	FILE * fp;
	char * directory;
	char * dirNom;
	int lenNom;
	int lenPer;
	char eof;
	int ris;
	int dim;
	int i, j;
	
	lenNom = strlen(nome);
	lenPer = strlen(percorso);
	dim = lenNom + lenPer - 1;
	if(directory = malloc(dim * sizeof(char))){
		for(i = 0; percorso[i] != '\0'; i++){
			*(directory + i) = percorso[i];
		}
		dirNom = directory + i;
		for(j = 0; nome[j] != '\0'; j++){
			*(dirNom + j) = nome[j];
		}
		*(dirNom + j) = '\0'; 
		if(fp = fopen(directory, "r")){
			if(fscanf(fp, "%c", &eof) != EOF){
				ris = 0;
			} else {
				ris = 1;
			}
			fclose(f);
		} else {
			printf("fileVuoto: errore nell' apertura del file %s\n", directory);
			ris = -1;
		}
	} else {
		printf("fileVuoto: errore nell' allocare la memoria per %d caratteri\n", dim);
		ris = -1;
	}
	return ris;
}
