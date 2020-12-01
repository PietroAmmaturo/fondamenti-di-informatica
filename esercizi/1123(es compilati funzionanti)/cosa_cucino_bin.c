#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_RIC "./ricette.dat"
#define FILE_FRI "./frigo.dat"
#define FILE_OUT "./posso_cucinare.dat"
#define MAX_LEN 50
#define NUM_ING 10
#define NUM_RIC 5

typedef struct ingrediente {
	char nome[MAX_LEN + 1];
	float quantita;
} ingrediente;

typedef struct ricetta {
	char nome[MAX_LEN + 1];
	int persone;
	int numIngredienti;
	ingrediente ingredienti[NUM_ING];
} ricetta;

int comparaStringhe(char [], char[]);
int possoCucinare(ricetta, ingrediente[], int);

int main (int argc, char * argv[]){
	
	ricetta ric[NUM_RIC], ricCuc[NUM_RIC];
	ingrediente fri[NUM_ING];
	FILE * fr;
	FILE * ff;
	FILE * fo;
	int i, posso, numRicCuc;
	
	if (fr = fopen(FILE_RIC, "rb")){
		if (ff = fopen(FILE_FRI, "rb")){
			if (fo = fopen(FILE_OUT, "wb")){
					
					/*memorizza frigo*/
					fread(fri, sizeof(ingrediente), NUM_ING, ff);

					/*memorizza ricette*/
					fread(ric, sizeof(ricetta), NUM_RIC, fr);
					/*for(i = 0; i < strlen(ric[0].nome); i++)
						if(ric[0].nome[i] == ' ' || ric[0].nome[i] == '/n' )
							ric[0].nome[i] = '\0';
					printf("%s ", ric[0].nome);
					*/
					/*memorizza ricette cucinabili*/
					numRicCuc = 0;
					for(i = 0; i < NUM_RIC; i++){
						posso = possoCucinare(ric[i], fri, NUM_ING);
						if (posso) {
							ricCuc[numRicCuc] = ric[i];
							numRicCuc++;
						}
					}
			/*salva ricette nel file*/
			fwrite(ricCuc, sizeof(ricetta), numRicCuc, fo);
			fclose(fo);
			
			/*verifica contenuto array di ricette*//*
			int j = 0;
			for (i = 0; i < NUM_RIC; i++){
						if (possoCucinare(ric[i], fri, NUM_ING)){
							printf("%s ", ric[i].nome);
							printf("%d ", ric[i].persone);
							printf("%d\n", ric[i].numIngredienti);
							for (j = 0; j < ric[i].numIngredienti; j++){
								printf("%s ", ric[i].ingredienti[j].nome);
								printf("%f\n", ric[i].ingredienti[j].quantita);
							}
						}
					}
				*/
					
					
	/*verifica contenuto file*/
	FILE * fp;
	int i, count;
	ricetta ric;
	fp = fopen(FILE_OUT, "r");
	if (fp){
		count = 0;
		
		while (fscanf(fp, "%s", ric.nome) != EOF){
			fscanf(fp, "%d", &ric.persone);
			fscanf(fp, "%d", &ric.numIngredienti);
			for(i = 0; i < ric.numIngredienti; i++){
				fscanf(fp, "%s", ric.ingredienti[i].nome);
				fscanf(fp, "%f", &ric.ingredienti[i].quantita);
			}
			
			printf("%d ", count);
			printf("%s\n", ric.nome);
			for(i = 0; i < ric.numIngredienti; i++){
				printf("%s ", ric.ingredienti[i].nome);
				printf("%f\n", ric.ingredienti[i].quantita);
			}
			count++;
		}
		
		printf("%d\n", count);
		fclose(fp);
	} else {
		printf("errore nell' apertura del file");
	}
	
					
			} else {
					printf("errore nell'apertura del file: %s\n", FILE_OUT);
			}
			fclose(ff);
		} else {
				printf("errore nell'apertura del file: %s\n", FILE_FRI);
		}
		fclose(fr);
	} else {
		printf("errore nell'apertura del file: %s\n", FILE_RIC);
	}
	return 0;
}
	
int possoCucinare(ricetta ric, ingrediente ingDis[], int numIngDis){
	int i, j, trovato;
	int ris;

	if (numIngDis >= ric.numIngredienti){
		ris = 1;
		for (i = 0; i < ric.numIngredienti && ris == 1; i++){
			trovato = 0;
			for (j = 0; j < numIngDis && trovato == 0; j++){
				if (comparaStringhe(ric.ingredienti[i].nome, ingDis[j].nome)
				&& (ric.ingredienti[i].quantita <= ingDis[j].quantita)){
					trovato = 1;
				}
			}
			ris = trovato;
		}
	} else {
			ris = 0;
	}
	
	return ris;
}

int comparaStringhe (char s1[], char s2[]){
	int i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return 0;
	return 1;
}

