/*data una stringa scrivere tutti i possibili anagrammi
OGNI CICLO SCAMBIO LA LETTERA IN POSIZIONE FR CON LE SUCCESSIVE E RICHIAMO
ANAG FINO ALLA FINE DELLA STRINGA
*/

#include <stdio.h>

void anag(char[], int);

int main(){
    char wor[5];
	scanf("%s", wor);
	anag(wor, 0);
}

void anag(char w[], int fr){
	int i;/*prima chiamata fr sempre 0*/
	char hol;
	for(i = fr; w[i] != '\0'; i++){
		/*le scambio*/
		hol = w[fr];
		w[fr] = w[i];
		w[i] = hol;
		anag(w, fr+1);
		hol = w[i];
		w[i] = w[fr];
		w[fr] = hol;
	}
	if(fr == i){
		printf("%s\n", w);
	}
}


