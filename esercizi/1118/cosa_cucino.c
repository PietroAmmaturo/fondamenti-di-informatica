#include <stdio.h>

#define NOME_FILE_RIC "./ricette.txt"
#define NOME_FILE_FRI "./frigo.txt"
#define NOME_FILE_OUT "./posso_cucinare.txt"
#define MAX_LEN 50
#define MAX_ING 10
#define ING_FRIGO 10

typedef struct {
	char nome[MAX_LEN];
	float quantita;
} ingrediente;

typedef struct {
	char nome[MAX_LEN];
	int numPer;
	int numIng;
	ingrediente ingredienti[MAX_ING];
} ricetta;

int possoCucinare(ricetta ric, ingredienti ingDis[], int numIngDisp);

int main(int argc, char * argv[]){
	FILE * fr, ff, fo;
	int i;
	ricetta ric;
	int numIng;
	
	ff = fopen(nome-file-fri, "r");
	if(ff) {
		fr = fopen(NOME_FILE_RIC, "r");
		if (fr){
			fo = fopen(NOME_FILE_OUT, "w");
			if (fo){
				
				/*leggo ingredienti frigo*/
				numIng = 0;
				while (fscanf(ff, "%s", ingredienti[numIng].nome) != EOF){
						fscanf(ff, "%f", &ingredienti[numIng].quantita);
					numIngredienti++;
					}
				
				/*acquisisce ricette*/
				while (fscanf(fr, "%s", ric.nome) != EOF){
					fscanf(fr, "%d", &ric.numPer);
					fscanf(fr, "%d", &ric.numIng);
					for(i = 0; i < ric.numIng; i++){
						fscanf(fr, "%s", ric.ingredienti[i].nome);
						fscanf(fr, "%f", &ric.ingredienti[i].quantita);
					}
		
				/*se posso cucinarla la scrivo*/
					if(possoCucinare(ric, ingDis, ING_FRIGO)){
						fprintf(fo, "%s\n", ric.nome);
						fprintf(fo, "%s\n", ric.numPer);
						fprintf(fo, "%s\n", ric.numIng);
						for(i = 0; i < ric.numIng; i++){
							fprintf(fo, "%s ", ric.ingredienti[i].nome);
							fprintf(fo, "%f\n", ric.ingredienti[i].quantita);
						}
					}
				}
				fclose(fo);
			} else {
				printf("errore nell' apertura del file");
			}
			fclose(fo);
		} else {
			printf("errore nell' apertura del file");
		}
		fclose(fo);
	} else {
		printf("errore nell' apertura del file");
	}
	
	return 0;
}

int possoCucinare(ricetta ric, ingredienti ingDis[], int numIngDisp){
	int i, j, trovato;
	int ris;
	
	if (numIng >= ric.numIng){
		ris = 1;
		for(i = 0; i < ric.numIng && ris == 1; i++){
			trovato = 0;
			for(j = 0; j < numIngDisp && trovato; j++){
				if (comparaStringhe(ric.ing[i].nome, ingDis[j].nome)
				&& (ric.ing[i].quantita <= ingDis[j].quantita){
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

int comparaStringhe (char s1[]. char s2[]){
	int i;
	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return 0;
	return 1;
}
