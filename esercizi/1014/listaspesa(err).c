#include <stdio.h>
#define NMAXPROD 50
#define TERMINE -1.0
/*Si scriva un programma che acquisiti al massimo 50 numeri reali positivi o nulli che rappresentano il prezzo
di vendita di articoli in un negozio (in ordine di importanza di acquisto), e l’importo massimo che si `e
disposti a spendere, determini il massimo numero di prodotti acquistabili con il denaro indicato ed il costo
totale dell’acquisto (i prodotti a prezzo 0.0 sono quelli in omaggio).
L’assunzione che il prezzo dei prodotti venga inserito in ordine di importanza di acquisto implica che se il
prodotto in posizione i risulta acquistabile con il denaro a disposizione questo venga sempre acquistato,
indipendentemente dal fatto che possa esistere una qualche altra combinazione di prodotti che massimizza
il numero di prodotti acquistati.
Il programma visualizza al termine:
numero di pezzi: costo totale
VARIANTE: Cosa cambia nella risoluzione del problema se i valori in ingresso sono strettamente positivi?*/
int main(int argc, char*argv[]) {
	
	int i, termine, npezzi[NMAXPROD], nprod;
	float prezz[NMAXPROD], impmax, prezzo, imp;
	
	nprod=0;
	scanf("%f", &prezzo);
	for(i = 0; i < NMAXPROD && (prezzo != (float)TERMINE); i++){
		prezz[i] = prezzo;
		scanf("%f", &prezzo);
		nprod++;
		}
		
	scanf("%f", &impmax);
	
	imp = impmax;
	for(i = 0; i < nprod; i++){
		npezzi[i] = 0;
		if(prezz[i] != 0)
			while(imp >= prezz[i]){
				imp = imp - prezz[i];
				npezzi[i]++;
			}
		else
			i++;
	}
	
	for(i = 0; i < nprod; i++)
		printf("%d : %f", npezzi[i], prezz[i] * npezzi[i]);
		
	return 0;

}
