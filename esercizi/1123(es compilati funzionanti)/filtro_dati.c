#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int valore;
	long int istante;
} campione

void filtraValori
	(
		campione campioni[], 
		int numCampioni,
		campione * * campioniFiltratip,
		int * numCampioniFiltratip
	)
{
	int i, j, last;
	int numCampioniFiltrati;
	campione * campioniFiltrati;
	
	numCampioniFiltrati = 0;
	/*conta campioni diversi*/
	for (i = 1; i < numCampioni; i++){
		if(campioni[i].valore != last){
			numCampioniFiltrati++;
			last = campioni[i].valore;
		}
	}
	
	/*inserisce i campioni filtrati nella memoria*/
	if(campioniFiltrati = malloc(numCampioniFiltrati * sizeof(campione)){
		campioniFiltrati[0].valore = campioni[0].valore;
		campioniFiltrati[0].istante = campioni[0].istante;
		j = 0;
		for (i = 1; i < numCampioni; i++){
			if(campioni[i].valore != last){
				campioniFiltrati[j].valore = campioni[i].valore;
				campioniFiltrati[j].istante = campioni[i].istante;
				last = campioni[i].valore;
				j++;
			}
		}
		*numCampioniFiltratip = numCampioniFiltrati;
		*campioniFiltratip = campioniFiltrati;
	} else {
		printf("filtraValori: errore nell'allocazione della memoria per %d campioni\n", numCampioniFiltrati);
	}
}


