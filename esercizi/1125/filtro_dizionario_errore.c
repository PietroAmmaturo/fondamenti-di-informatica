/*Scrivere un programma che riceve in ingresso una stringa di al pi`u 25 caratteri che rappresenta un vocabolo contenente un errore di battitura (1 carattere sbagliato). Il programma cerca nel file di testo ASCII vocab.txt e visualizza tutti i vocaboli (anch’essi lunghezza massima 25 caratteri) che potrebbero essere il vocabolo corretto (hanno un solo carattere di differenza - nella stessa posizione - rispetto alla stringa in ingresso). Non si consideri il caso in cui si sia dimenticato un carattere o se ne sia aggiunto uno di troppo.
*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 25
#define FILE_NAME "./vocab.txt"
int main(int argc, char * argv[]){
	char input[MAX_LEN + 1], parola[MAX_LEN + 1];
	FILE *f;
	int lenInput;
	
	if(f = fopen(FILENAME, "r")){
		scanf("%s", input);
		lenInput = strlen(input);
		while(fscanf(f, "%s", parola) != EOF) {
			if (diff1(parola, input, lenInput))
				printf("%s\n", parola);
		}
		fclosa(f);
	} else {
		printf("errore nell'apertura del file");
	}
	
	
	return 0;
}

int diff1(char s1[], char s2[]){
	int i;
	int diffs;
	int result;
	int len1;
	len1 = strlen(s1);
		
	if(len1 == len2){
		diffs = 0;
		for(i = 0; i < strlen(s2) && diffs <= MAX_DIFFS; i++)
			if (s1[i] != s2[i])
				diffs++
		if(diffs == MAX_DIFFS)
			result = 1;
		else
			result = 0;
	} else 
		result = 0;
	return result;
}
