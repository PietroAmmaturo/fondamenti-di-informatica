#include <stdio.h>

#define FILE_RIC "./ricette.txt"
#define FILE_FRI "./frigo.dat"
#define FILE_OUT "./ricette.dat"
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

int main (int argc, char * argv[]){
	
	ricetta ric[NUM_RIC];
	ingrediente fri[NUM_ING];
	FILE * fr;
	FILE * ff;
	FILE * fo;
	int i, j;
	
	if (fr = fopen(FILE_RIC, "r")){
		if (ff = fopen(FILE_FRI, "r")){
			if (fo = fopen(FILE_OUT, "wb")){
					
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
					
					/*salva ricette nel file ricette.dat*/
					fwrite(ric, sizeof(ricetta), NUM_RIC, fo);
					
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
