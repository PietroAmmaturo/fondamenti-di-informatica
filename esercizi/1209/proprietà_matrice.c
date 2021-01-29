#include <stdio.h>

#define DIM 3
#define MAX_VAL 3
#define MIN_VAL 1

int hasProperty1(int m[][DIM]);
int main (int argc, char * argv[])
{
	int mat[DIM][DIM], i, j, ris;
	for(i = 0; i < DIM; i++)
		for(j = 0; j < DIM; j++)
			scanf("%d", &mat[i][j]);
	ris = hasProperty1(mat);
	printf("%d", ris);
	return 0;
}
int hasProperty1(int m[][DIM]){
	int i, j, k;

	for(i = 0; i < DIM; i++)
		for(j = 0; j < DIM; j++)
			if(m[i][j] > MAX_VAL || m[i][j] < MIN_VAL)
				return 0;
	
	for(i = 0; i < DIM; i++)
		for(j = 0; j < DIM; j++)
			for(k = j + 1; k < DIM; k++){
				if(m[i][j] == m[i][k])
					return 0;
				if(m[j][i] == m[k][i])
					return 0;
			}
			
	return 1;
}

int hasProperty1(int m[][DIM]){
	int i, j, num[DIM][2];

	for(i = 0; i < DIM; i++)
		num[i] = 0;
	
	for(i = 0; i < DIM; i++){
		/*azzera i contatori*/
		for(j = 0; j < DIM; j++){
			num[j][0] = 0;
			num[j][1] = 0;
		}
		/*controlla il contatore della i esima riga e i esima colonna*/
		for(j = 0; j < DIM; j++){
			num[m[i][j]][0]++;
			num[m[j][i]][1]++;
			if (num[m[i][j]][0] > 1 || num[m[j][i]][1] > 1)
				return 0;
		}
	}
	return 1;
}
