void compressioneDati
	(
		float valori[],
		int dimValori,
		int k,
		float * * compressip,
		int * dimCompressip
	)
{
	int i, numValoriSalvati, dimCompressi;
	float * compressi;
	float rapporto, somma, media;
	
	
	numValoriSalvati = 0;
	rapporto = dimValori / k;
	dimCompressi = intSup(rapporto);
	if (compressi = malloc(dimCompressi * sizeof(float))){
		for (i = 0; i < dimValori; i++){
			if (i < k * (numValoriSalvati + 1)){
				somma += valori[i];
			} else {
				media = somma / k;
				compressi[numValoriSalvati] = media;
				numValoriSalvati++;
				somma = 0;
				i--;
			}
		} /*i sarà a questo punto il numero di valori totale*/
		somma += valori[i];
		media = somma / k;
		compressi[numValoriSalvati] = media;
		numValoriSalvati++;
		*dimCompressip = dimCompressi;
		*compressip = compressi;
	} else {
		printf("filtraValori: errore nell'allocazione della memoria per %d float\n", dimCompressi);
	}
}

int intSup(float val){
	int numi;
	float numf;
	numi = (int)val;
	numf = (float)numi;
	if(numf == val)
		return numi;
	return numi + 1;
}


