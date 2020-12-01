/*sottoprogramma che ricevuta in ingresso una stringa ne crea e restituisce una nuova al chiamante contenente tutte e sole le vocali presenti nella stringa di ingresso*/
#include <stdio.h>
#include <stdlib.h>

#define LMAX 30
char * strvoc(char []);
int main(int argc, char * argv[]){
	char parola[LMAX + 1];
	char * solovocali;
	
	gets(parola);
	solovocali = strvoc(parola);
	if(solovocali){
		printf("%s\n", solovocali);
		free(solovocali);
	}
	return 0;
}

char * strvoc(s[]){
	int size;
	char * vocali;
	int i, j;
	
	size = 0;
	for(i = 0; s[i] != '\0', i++)
		if(isvoc(s[i]))
			size++;
			
	if(vocali = malloc((size + 1) * sizeof(char))){
		j = 0;
		for(i = 0; s[i] != '\0'; i++)
			if(isvoc(s[i]){
				*(vocali + j) = s[i];
				j++;
			}
		*(vocali + j) = '\0';
	} else
			printf("strvoc: alla locazione fallita %d char \n", (size + 1));
	return vocali;
}
