#include <stdio.h>
#include <string.h>
	/*acquisita una stringa di al più 25 caratteri la visualizza con i caratteri in ordine inverso*/ 
#define LMAX 20
int main(int argc, char*argv[]) {

	int i, cont;
	char seq[LMAX + 1];
	
	scanf("%25s", &seq[0]);
	
	for(cont = 0; seq[cont] != '\0'; cont++);
	
	for(i = cont - 1; i >= 0; i--)
		printf("%c", seq[i]);
	
	printf("\n");
		
	return 0 ;
}

