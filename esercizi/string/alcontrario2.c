#include <stdio.h>
#include <string.h>
	/*acquisita una stringa di al più 25 caratteri la salva con i caratteri in ordine inverso*/ 
#define LMAX 25
int main(int argc, char*argv[]) {

	int i, dim, tmp;
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
	
	printf("%s", seq);
		
	return 0 ;
}

