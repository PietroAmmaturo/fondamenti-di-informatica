#include <stdio.h>
#include <stdlib.h>

/*
+ definire un elemento opportuno per le liste
+ testa della lista
+ elemento generico
+ ultimo elemento della lista
 
operazioni:
+ aggiungere un elemento alla lista
	+ davanti a tutti gli altri (push)
	+ in coda a tutti gli altri (append)
	+ in un punto determinato da una strategia
+ eliminare un elemento
	+ in base al valore
	+ in base alla posizione (primo. ultimo, ..)
	
	+ ordinare una lista in base a qualche criterio
	
	+ scandire la lista
		+ analizzare i dati
		+ cercare un elemento
*/
typedef struct listai_s {
	int val; /*potrebbe essere char o float o un qualsiasi tipo, contiene il dato*/
	struct listai_s * next;
} listai_t;

int main(int argc, char * argv[]){
	listai_t * head = NULL; /*tiene il dito sul primo elemento*/
	
	listai_t * nuovo;
}

