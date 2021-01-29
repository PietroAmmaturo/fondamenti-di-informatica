#include <stdio.h>
#define N 10
/*Si scriva un programma che acquisiti in ingresso 10 valori interi ed un ulteriore numero intero che rappresenta
una quantit`a obiettivo da raggiungere, determini se tra i 10 valori acquisiti esista almeno una coppia di
valori che sommati tra loro dia come risultato il numero obiettivo inserito. Si assuma che tra i valori inseriti
non compaiano valori ripetuti. Si visualizzi 1 in caso esista tale coppia di valori, 0 altrimenti.*/
int main(int argc, char*argv[]) {
	
	int arr[N], s, i, j, ris;
	
	for(i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	scanf("%d", &s);
	
	ris = 0;
	for(i = 0; i < (N - 1) && ris == 0; i++)
		for(j = i + 1; j < N && ris == 0; j++)
			if((arr[i] + arr[j]) == s)
				ris = 1;
				
	printf("%d\n", ris);
	return 0;

}
