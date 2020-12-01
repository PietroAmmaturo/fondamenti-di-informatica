#include <stdio.h>

#define NOME_FILE "./ricette.txt"
#define MAX_LEN 50
#define MAX_ING 10
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

int main(int argc, char * argv[]){
	FILE * fp;
	int i, count;
	ricetta ric;
	fp = fopen(NOME_FILE, "r");
	if (fp){
		count = 0;
		/*acquisisce ricetta*/
		while (fscanf(fp, "%s", ric.nome) != EOF){
			fscanf(fp, "%d", &ric.numPer);
			fscanf(fp, "%d", &ric.numIng);
			for(i = 0; i < ric.numIng; i++){
				fscanf(fp, "%s", ric.ingredienti[i].nome);
				fscanf(fp, "%f", &ric.ingredienti[i].quantita);
			}
			/*stampa ricetta*/
			printf("%d ", count);
			printf("%s\n", ric.nome);
			for(i = 0; i < ric.numIng; i++){
				printf("%s ", ric.ingredienti[i].nome);
				printf("%f\n", ric.ingredienti[i].quantita);
			}
			count++;
		}
		/*stampa totale ricette*/
		printf("%d\n", count);
		fclose(fp);
	} else {
		printf("errore nell' apertura del file");
	}
	
	return 0;
}
