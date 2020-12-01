#include <stdio.h>
#include <string.h>
/*Si scriva un programma che ricevuta in ingresso una stringa di al massimo 50 caratteri composta da parentesi
bilanciate (e fino a che non `e tale la richieda) determini e visualizzi il massimo livello di annidamento delle
parentesi di tale stringa.*/
#define MAX_LEN 50
int livelloAnnidamento(char stringa[]);
int bilanciateValide(char stringa[]);
int main(int argc, char * argv[]){
		char seq[MAX_LEN + 1];
		
		do
			scanf("%s", seq);
		while(!bilanciateValide(seq));
		
		printf("%d", livelloAnnidamento(seq));
		return 0;
}

int livelloAnnidamento(char stringa[]){
	int i, annidamento, maxAnnidamento;

	annidamento = 0;
	for(i = 0; stringa[i] != '\0'; i++){
		if (stringa[i] == '('){
			annidamento++;
			if (annidamento > maxAnnidamento)
				maxAnnidamento = annidamento;
		}
		else
			annidamento--;
	}
	return maxAnnidamento;
}

int bilanciateValide(char stringa[]){
	int i, ris=1, annidamento;
	
	annidamento = 0;
	for(i = 0; stringa[i] != '\0'; i++){
		if (stringa[i] == '(')
			annidamento++;
		else
			annidamento--;
		if(annidamento < 0)
			ris = 0;
	}
		if(annidamento > 0)
			ris = 0;
	return ris;
}
