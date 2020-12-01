#include <stdio.h>
#include <stdlib.h>
void acquisisciFloat(float * * numpp, int * numFloatp);
void compressioneDati
	(
		float valori[],
		int dimValori,
		int k,
		float * * compressip,
		int * dimCompressip
	);

int main(int argc, char * argv[])
{
	int i, k, dim, dim2;
	float * point;
	float *point2;
	
	printf("\n\n");
	acquisisciFloat(&point, &dim);
	printf("valori acquisiti:\n");
	for (i = 0; i < dim; i++)
		printf("%f\n", point[i]);
	printf("\n");
	
	scanf("%d", &k);
	
	compressioneDati(point, dim, k, &point2, &dim2);
	printf("\n");
	printf("valori compressi:\n");
	for (i = 0; i < dim2; i++)
		printf("%f\n", point2[i]);
	printf("\n");
	return 0;
}


void acquisisciFloat(float * * numpp, int * numFloatp)
{
	float * nump;
	int i, numFloat;
	
	scanf("%d", &numFloat);
	if(nump = malloc(numFloat * sizeof(int))){
		for(i = 0; i < numFloat; i++)
			scanf("%f", (nump + i));
		*numFloatp = numFloat;
		*numpp = nump;
	} else
		printf("acquisisciInteri: errore nell'allocazione di memoria per %d: float\n", numFloat);
}


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
	
	somma = 0;
	printf("valori calcolati dal sottoprogramma:\n");
	numValoriSalvati = 0;
	if ((float)(int)((float)dimValori / k) == ((float)dimValori / k))
		dimCompressi = (int)((float)dimValori / k);
	else
		dimCompressi = (int)((float)dimValori / k) + 1;
	if (compressi = malloc(dimCompressi * sizeof(float))){
		for (i = 0; i < dimValori; i++){
			if (i < k * (numValoriSalvati + 1)){
				somma += valori[i];
			} else {
				media = somma / k;
				compressi[numValoriSalvati] = media;
				numValoriSalvati++;
				printf("somma: %f ", somma);
				printf("media: %f\n", media);
				somma = 0;
				i--;
			}
		} /*i sarà a questo punto il numero di valori totale*/
		somma += valori[i];
		media = somma / (i - (k*numValoriSalvati));
		printf("somma: %f ", somma);
		printf("media: %f\n", media);
		compressi[numValoriSalvati] = media;
		numValoriSalvati++;
		*dimCompressip = dimCompressi;
		*compressip = compressi;
	} else {
		printf("filtraValori: errore nell'allocazione della memoria per %d float\n", dimCompressi);
	}
}

