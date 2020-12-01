int coppieNumeriUguali(int numero[], int dim){

	int i, j, ris, dim1;

	dim1 = 0;
	ris = 0;
	for (i = 0; i < dim1; i++)
		for (j = i + 1; j < dim; j++)
			if (numero[i] == numero[j])
				ris++;
	
	return ris;
	}
				
