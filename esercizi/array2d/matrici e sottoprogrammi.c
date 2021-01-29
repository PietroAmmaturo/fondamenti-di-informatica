/* passare una matrice in un sottoprogramma*/

void function(int * mat, int numc, int numr)
{
	/*mat[i][j] = (mat + i*numc + j);*/
	/*scorrere la matrice*/
	for (i = 0; i < numr; i++)
		for (j = 0; j < numc; j++)
			mat[i][j] = *(mat + i*numc + j);
}
