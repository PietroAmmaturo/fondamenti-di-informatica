
	#include <stdio.h>
#include <string.h>
	/*acquisisce una stringa di al piu 25 caratteri e ne inverte l' ordine ed elimina le vocali, quindi la visualizza*/ 
#define LMAX 25
int main(int argc, char*argv[]) {

	int i, dim, inv, tmp, meta_dim;
	char seq[LMAX + 1];
	
	scanf("%s", seq);
	
	dim = 0;
	while(seq[dim] != '\0')
		dim++;
	
			printf("%s\n", seq);
			
	i=0;
	for(dim = 0; seq[dim] != '\0'; dim++){
		if(seq[dim] != 'a' && seq[dim] != 'e' &&
		seq[dim] != 'i' && seq[dim] != 'o' && seq[dim] != 'u'){
			seq[i] = seq [dim];
			i++;
		}
	}
		seq[i] = '\0';
		printf("%s\n", seq);
		
		
		
		
	/*da aggiustare*/	
	dim--;
	meta_dim = dim/2;
	for(inv = 0; inv < meta_dim; inv++){
		tmp = seq[dim-inv];
		seq[dim-i] = seq[inv];
		seq[inv] = tmp;
		printf("%s\n", seq);
	}
	
	printf("%s\n", seq);
		
	return 0 ;
}

	
	
