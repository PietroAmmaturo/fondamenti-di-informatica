void popolaArray(float numeri[], int *validi){
	float valore;
	int valoriValidi= 0;
	scanf("%f", &valore);
	while(valore != 0){
		numeri[valoriValidi] = valore;
		valoriValidi++;
		scanf("%f", &valore);
	}
	
	/*si poteva usare anche la return, è solo per fare un esempio di passaggio per indirizzo*/
	*validi = valoriValidi;
}
