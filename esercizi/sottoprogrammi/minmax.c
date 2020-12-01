/*quando si chiede l'indirizzo di una variabile si fa &variabile, quando si dedica una variabile all'indirizzo si usa tipo * variabile_che_indica_l'indirizzo, quando si vuole scrivere nella variabile che ha un dato indirizzo si usa * variabile_che_indica_l'indirizzo = valore_da_mettere_nella_variabile.*/
void minmax(int arr[], int dim, int * minIndex /*minval è un indirizzo (come se fosse un altro tipo, tipo int, float, indirizzo, ma deve esistere un tipo di variabile di indirizzo per ogni tipo di variabile quindi si usa una combinazione di tipo + * + nome_variabile */, int * maxIndex) {
	int i;
	int max, min;
	
	min = vett[0];
	max = vett[0];
	for (i = 1; i < dim; i++)
		if (vett[i] < min)
			imin = i;
		else if (vett[i] > max)
				imax = i;
	
	*minIndex = imin; /*vai nella cella il cui indirizzo è minval e scrivici l'indice di min*/
	*maxIndex = imax;
	
	return; /* ridondante */
}
