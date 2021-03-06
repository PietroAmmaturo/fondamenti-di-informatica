#include <stdio.h>
#define NMAXPROD 50
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

/*nella variante cambia che se l'importo raggiunge zero, si può subito uscire dal ciclo*/
int main(int argc, char*argv[]) {
	
	int i, termine, npezzi, nprod;
	float prezz[NMAXPROD], impmax, prezzo, imp, tot;
	
	scanf("%f", &prezzo);
	for(nprod = 0; nprod < NMAXPROD && prezzo >= 0; nprod++){
		prezz[i] = prezzo;
		scanf("%f", &prezzo);
		}
		
	scanf("%f", &impmax);
	
	npezzi = 0;
	imp = impmax;
	for(i = 0; i < nprod; i++){
			if(imp >= prezz[i]){
				imp = imp - prezz[i];
				npezzi++;
			}
	}
	
	/* variante */
	/*
	npezzi = 0;
	imp = impmax;
	for(i = 0; i < nprod && imp > 0; i++){
			if(imp >= prezz[i]){
				imp = imp - prezz[i];
				npezzi++;
			}
	}
	*/
	tot = impmax - imp;
	
	printf("%d : %f", npezzi, tot);
		
	return 0;
}
