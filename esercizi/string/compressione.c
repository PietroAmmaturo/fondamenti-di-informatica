#include <stdio.h>
#include <string.h>
	/*acquisisce una stringa di al piu 25 caratteri e ne inverte l' ordine ed elimina le vocali, quindi la visualizza*/ 
#define LMAX 25
int main(int argc, char*argv[]) {

	int i, dim, tmp, vocali;
	char seq[LMAX + 1];
	
	scanf("%s", seq);
	
	dim = 0;
	while(seq[dim] != '\0')
		dim++;
	
	
	i = 0;
	dim--;
	while (dim > i){
		tmp = seq[dim];
		seq[dim] = seq[i];
		seq[i] = tmp;
		i++;
		dim--;
	}
	
	i=0;
	for(dim = 0; seq[dim] != '\0'; dim++){
		if(seq[dim] != 'a' && seq[dim] != 'e' &&
		seq[dim] != 'i' && seq[dim] != 'o' && seq[dim] != 'u'){
			seq[i] = seq [dim];
			i++;
		}
	seq[i] = '\0';
	}
		
	/*
	vocali = 0;
	for(i = 0; i < dim; i++)
		if(seq[i] == 'a' ||
		seq[i] == 'e' ||
		seq[i] == 'i' ||
		seq[i] == 'o' ||
		seq[i] == 'u')
			vocali++;
		else
			seq[i - vocali] = seq[i];
			
	dim = dim - vocali;
	seq[dim] = '\0';
	
	printf("%s\n", seq);
	
	i=0;
	dim--;
	while (dim > i){
		tmp = seq[dim];
		seq[dim] = seq[i];
		seq[i] = tmp;
		i++;
		dim--;
	}
	*/

	printf("%s\n", seq);
		
	return 0 ;
}

