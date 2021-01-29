#include <stdio.h>
/*scrivere un programma che ricevuta in ingresso una stringa chiama validaStringa e visualizza il risultato*/
int main(int argc, char * argv[])
{	
	int risultato;
	char * stringa;
	if(argc == 2){
		stringa = argv[1];
		risultato = validaParentesi(stringa);
		printf("%d", risultato);
	} else
		printf("%s errore - il programma aspetta una stringa in ingresso\n", argv[0]);
		
	return 0;
}

