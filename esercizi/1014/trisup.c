#include <stdio.h>
#define N 4
/*Si scriva un programma che acquisito un array bidimensionale di dimensione 4, visualizzi 1 se `e triangolare
superiore, 0 altrimenti.
Si ricorda che una matrice si definisce triangolare superiore se tutti gli elementi al di sotto della sua diagonale
principale sono nulli.*/
int main(int argc, char*argv[]) {

	int i, j, istsup;
	float mat[N][N];

	for(i = 0; i < N; i++)
		for(j = 0; j < N; j++)
			scanf("%f", &mat[i][j]);

	istsup = 1;
	for(i = 0; i < N && istsup == 1; i++)
		for(j = 0 ; j < i && istsup == 1; j++)
			if (mat[i][j] != 0)
				istsup = 0;
				
	printf("%d", istsup);

	return 0;

}
