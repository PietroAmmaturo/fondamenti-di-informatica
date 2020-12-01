/*Scrivere un sottoprogramma che riceve in ingresso una stringa che rappresenta un codice ISBN (International Standard Book Number) utilizzato per identificare univocamente un volume. Il sottoprogramma restituisce 1 se il codice ISBN `e valido, 0 altrimenti. Un codice ISBN `e valido se la “somma delle somme” `e un multiplo di 11. La “somma delle somme” si calcola addizionando ogni cifra del codice alla somma delle precedenti cifre.
*/
#include <stdio.h>
#include <string.h>
#define ISBN_LEN 10
#define FIRST_NUM '0'
#define IGNORE_CHAR '-'
#define ISBN_CHECK_VALUE 11

void sommaNumeri(int numeri[], int len);

int verificaIsbn(char[]){
	int numbers[ISBN_NUM_LEN];
	int c, i;
	
	c = 0;
	for(i = 0; isbn[i] != '\0'; i++) 
		if (isbn[i] != IGNORE_CHAR) {
			numbers[c] = isbn[i] - FIRST_NUM;
			c++;
		}
		
	sommaNumeri(numbers, ISBN_NUM_LEN);
	sommaNumeri(numbers, ISBN_NUM_LEN);
		
	if (numbers[ISBN_NUM_LEN - 1] % ISBN_CHECK_VALUE == 0)
		return 1;
			
	return 0;
}
	
void sommaNumeri(int numeri[], int len){
	int i;
	
	for(i = 1; i < len; i++)
		numeri[i] = numeri[i - 1] + numeri[i];
}

