#include <stdio.h>
#include <string.h>
#define MAX_LEN 30
/*Scrivere un programma che acquisita una stringa di al pi´u 30 caratteri, individui la sottostringa pi`u lunga in
essa contenuta, senza caratteri ripetuti. Il programma visualizza la lunghezza di tale sottostringa, seguita
da un carattere ’a-capo’.
*/
int main(int argc, char * argv[]){
	
	char str[MAX_LEN + 1];
	int i, j, k, lens, maxl, trovata, trovataalmeno;
	
	scanf("%s", &str[0]);
	
	maxl = 0;
	trovataalmeno = 0;
	for (k = 1; str[k] != '\0'; k++){
		trovata = 0;
		for (i = k; str[i] != '\0' && !trovata; i++){
			for (j = k - 1; j < i && !trovata; j++)
				if (str[j] == str[i]){
					trovata = 1;
					trovataalmeno = 1;
					}
		}
		lens = i - k;
		if (lens > maxl)
			maxl = lens;
	}
	if (!trovataalmeno)
		maxl++;
		
	printf("%d\n", maxl);
	return 0;
}
