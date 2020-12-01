#include <stdio.h>

#define FILE_RIC "./ricette.dat"
#define FILE_FRI "./frigo.dat"
#define FILE_OUT "./posso_cucinare.dat"
#define MAX_LEN 50
#define NUM_ING 10
#define NUM_RIC 5

typedef struct ingrediente {
	char nome[MAX_LEN];
	float quantita;
} ingrediente;

typedef struct ricetta {
	char nome[MAX_LEN];
	int persone;
	int numIngredienti;
	ingrediente ingredienti[NUM_ING];
} ricetta;

int comparaStringhe(char [], char[]);
int possoCucinare(ricetta, ingrediente[], int);

int main (int argc, char * argv[]){
	
	ricetta ric[NUM_RIC];
	ingrediente fri[NUM_ING];
	FILE * fr;
	FILE * ff;
	FILE * fo;
	int i, j;
	
	if (fr = fopen(FILE_RIC, "r")){
		if (ff = fopen(FILE_FRI, "r")){
			if (fo = fopen(FILE_OUT, "w")){
					
					/*memorizza frigo*/
					i = 0;
					while (fscanf(ff, "%s", fri[i].nome) != EOF){
						fscanf(ff, "%f", &fri[i].quantita);
						i++;	
					}
					
					/*memorizza ricette*/
					i = 0;
					while (fscanf(fr, "%s", ric[i].nome) != EOF){
						fscanf(fr, "%d", &ric[i].persone);
						fscanf(fr, "%d", &ric[i].numIngredienti);
						for (j = 0; j < ric[i].numIngredienti; j++){
							fscanf(fr, "%s", ric[i].ingredienti[j].nome);
							fscanf(fr, "%f", &ric[i].ingredienti[j].quantita);
						}
						i++;
					}
					
					/*salva ricette nel file*/
					for (i = 0; i < NUM_RIC; i++){
						if (possoCucinare(ric[i], fri, NUM_ING)){ /*se la posso cucinare la salva*/
							fprintf(fo, "%s ", ric[i].nome);
							fprintf(fo, "%d ", ric[i].persone);
							fprintf(fo, "%d\n", ric[i].numIngredienti);
							for (j = 0; j < ric[i].numIngredienti; j++){
								fprintf(fo, "%s ", ric[i].ingredienti[j].nome);
								fprintf(fo, "%f\n", ric[i].ingredienti[j].quantita);
							}
						}
					}
					fclose(fo);
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
	
				printf("%s\n", ric.nome);
			for(i = 0; i < ric.numIngredienti; i++){
				printf("%s ", ric.ingredienti[i].nome);
				printf("%f\n", ric.ingredienti[i].quantita);
			}
		
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
	printf("%d\n", ris);
	return ris;
}

int comparaStringhe (char s1[], char s2[]){
	int i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return 0;
	return 1;
}

