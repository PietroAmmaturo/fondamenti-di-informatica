#include <stdio.h>
#define NR 2
/*scrivere un programma che acquisisce i dati di un array bidimensionale quadrato 10x10, POI calcola se la matrice rappreentata è la matrice identità e in tal caso visualizza 1. zero altrimenti*/
int main(int argc, char*argv[]) {
	
	int mat[NR][NR];
	int i, j, isid;
	
	for(i=0; i<NR; i++)
		for(j=0; j<NR; j++)
			scanf("%d", &mat[i][j]);
	
	isid = 1;
	for(i=0; i<NR && isid == 1; i++)
		for(j=0; j<NR && isid == 1; j++)
			if(((mat[i][j] != 0) && (i != j)) ||
			((i == j) && (mat[i][j] != 1)))
					isid = 0;
	
	printf("%d", isid);
	return 0;
}
