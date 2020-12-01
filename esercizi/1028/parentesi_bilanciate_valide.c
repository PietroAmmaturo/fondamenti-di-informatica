#include <stdio.h>
#include <string.h>
/*Si scriva un sottoprogramma per determinare se una stringa `e costituita da parentesi tonde bilanciate. Il
sottoprogramma restituisce 1 se la stringa `e valida, 0 altrimenti.
*/

int bilanciateValide(char stringa[]){
	int i, ris;
	
	annidamento = 0;
	for(i = 0; stringa[i] != '\0'; i++){
		if (stringa[i] == '(')
			annidamento++;
		else
			annidamento--;
		if(annidamento < 0)
			ris = 0;
	}
		if(annidamento > 0)
			ris = 0;
	return ris;
}
