/*Scrivere un programma che chiede all’utente una stringa di al pi`u 26 caratteri dell’alfabeto minuscoli, che saranno senz’altro tutti diversi tra loro ed il nome di un file di testo (al pi`u 50 caratteri, incluso percorso, nome ed estensione) e visualizza, per ciascun carattere, quante volte esso compare nel file (si assuma che nel file compaiano solo caratteri minuscoli e spazi).
*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 26
#define FIRST_LETTER 'a'

int main(int argc, char * argv[]){
	FILE * fp;
	char stringa[MAX_LEN + 1];
	int contatori[MAX_LEN];
	char c;
	int trovato;
	
	scanf("%s", caratteri);
	scanf("%s", nomefile);
	
	if(fp = fopen(nomeFile)){
		while(fscanf(fp, "%c", &c) != EOF){
				if(c != ' '){
					contatori[c - FIRST_LETTER]++;
					}
		}
		
		for (i = 0; stringa[i] != '\0'; i++) {
			printf("%c: %d", caratteri[i], contatori[caratteri[i] - FIRST_LETTER]);
		}
		fclose(fp);
	} else {
		printf("errore nell' apertura del file %s\n", FILE_NAME);
	}
	return 0;
}
