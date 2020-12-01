
void acquisisciInteri(int * numIntp, int * * numpp){
	int * nump, i, numInt;
	
	scanf("%d", &numInt);
	if(nump = malloc(numInt * sizeof(int))){
		for(i = 0; i < numInt; i++)
			scanf("%d", (nump + i));
		*numIntp = numInt;
		*numpp = nump;
	} else
		printf("acquisisciInteri: errore nell'allocazione di memoria per %d: interi\n", numInt);
}


