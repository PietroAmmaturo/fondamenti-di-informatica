#define ING_DISP 50
int possoCucinare(ricetta ric, ingredienti ingDis[], int numIngDisp){
	int i, j, trovato;
	int ris;
	
	if (numIng >= ric.numIng){
		ris = 1;
		for(i = 0; i < ric.numIng && ris == 1; i++){
			trovato = 0;
			for(j = 0; j < numIngDisp && trovato; j++){
				if (comparaStringhe(ric.ing[i].nome, ingDis[j].nome)
				&& (ric.ing[i].quantita <= ingDis[j].quantita){
					trovato = 1;
				}
			}
			ris = trovato;
		}
	} else {
			ris = 0;
	}

	return ris;
}
