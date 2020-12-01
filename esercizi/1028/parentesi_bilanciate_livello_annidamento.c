#include <stdio.h>
#include <string.h>
/*Data una stringa, questa `e costituita da parentesi tonde bilanciate se ad ogni parentesi aperta corrisponde
una parentesi chiusa (che viene dopo di essa) ed ad ogni parentesi chiusa corrisponde una parentesi aperta
(che viene prima di essa).
Sono stringhe valide ad esempio: "", "()", "()()", "(()())".
Mentre non sono valide ad esempio: "(", ")(", "(()".
Si scriva un sottoprogramma che data una stringa valida determini e restituisca al chiamante il massimo
livello di annidamento delle parentesi.
*/

int livelloAnnidamento(char stringa[]){
	int i, annidamento, maxAnnidamento;

	annidamento = 0;
	for(i = 0; stringa[i] != '\0'; i++){
		if (stringa[i] == '('){
			annidamento++;
			if (annidamento > maxAnnidamento)
				maxAnnidamento = annidamento;
		}
		else
			annidamento--;
	}
	return maxAnnidamento;
}
