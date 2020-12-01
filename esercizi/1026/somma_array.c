int sommaArray(float numeri[], int dim, float somme[]){

	int i;
	
	if (dim > 0){
		somme[0] = numeri[0];
		for (i = 1; i < dim; i++)
				somme[i] = somme[i - 1] + numero[i];
	}
}
				
