/*Dato un numero intero positivo, definiamo la rotazione di una cifra come lo spostamento della cifra pi´u significativa all’ultimo posto (come cifra meno significativa), rotazione a sinistra, oppure lo spostamento della cifra meno significativa davanti al numero (come cifra pi`u significativa), rotazione a destra. Se la rotazione genera un valore preceduto da zeri, gli zeri vengono rimossi (ad es. 10203 con rotazione a sinistra diventa 2031, e con ulteriore rotazione a sinistra diventa 312).
Scrivere un programma che riceve in ingresso un numero intero positivo (e se non `e tale lo richiede) e visualizza il valore intero pi`u grande che si pu`o ottenere mediante una o pi`u rotazioni a destra e una o pi`u rotazioni a sinistra. Si suggerisce di organizzare la soluzione sviluppando sottoprogrammi.
*/
#include <stdio.h>
#include <string.h>

#define BASE 10

int contaCifre(int numero, int base);
int ruotaDestra(int numero, int base);
int ruotaSinistra(int numero, int base);
int potenza(int base, int esponente);


int main(int argc, char * argv[]){
	int value, maxValue, tmp;
	int cifre, i;
	
	do{
		scanf("%d", &value);
	} while (value <= 0);
	
	cifre = contaCifre(value, BASE);
	
	maxValue = value;
	
	tmp = value;
	for(i = 0; i < cifre - 1; i++) {
		tmp = ruotaDestra(tmp, BASE);
		if (tmp > maxValue)
			maxValue = tmp;
	}
	
	tmp = value;
	for(i = 0; i < cifre - 1; i++) {
		tmp = ruotaSinistra(tmp, BASE);
		if (tmp > maxValue)
			maxValue = tmp;
	}
	
	
	return 0;
}

int ruotaDestra(int numero, int base){
	int cifre;
	int resto;
	int tmp;
	
	cifre = contaCifre(numero, base);
	
	resto = numero % base;
	tmp = numero / base;
	tmp = tmp + resto * potenza(base, cifre - 1);
	
	return tmp;
}

int ruotaSinistra(int numero, int base){
	int cifre;
	int divisore;
	int resto;
	int tmp;
	
	cifre = contaCifre(numero, base);
	divisore = potenza(base, cifre - 1);
	
	resto = numero % divisore;
	tmp = numero / divisore;
	
	tmp = resto * base + tmp;
	
	return tmp;
}
