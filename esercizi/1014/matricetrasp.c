#include <stdio.h>
#define N 4
/*Si scriva un programma che acquisita un array bidimensionale di dimensione 4 ne calcoli e visualizzi poi
la sua trasposta. Si ricorda che data una matrice A, la sua trasposta AT
, si ottiene scambiando ∀i, ∀j
l’elemento in posizione (i, j) con l’elemento in posizione (j, i).*/
int main(int argc, char*argv[]) {

	int i, j;
	float mat[N][N], tmat[N][N];

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			scanf("%f", &mat[j][i]);

	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			tmat[j][i] = mat[i][j];
			printf("  %f  ", tmat[j][i]);
			}
		printf("\n");
	}
				

	return 0;

}
