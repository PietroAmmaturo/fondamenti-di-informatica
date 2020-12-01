
/*Scrivere un sottoprogramma conta che ricevuta in ingresso una stringa conta e restituisce il numero di
vocaboli contenenti doppie. La stringa ricevuta in ingresso contiene una frase scritta in italiano con vocaboli
separati esclusivamente da spazi.
Ingresso/Uscita:
input: una stringa
output: un intero
*/
int contaDoppie(char seq[]);
int ciSonoDoppie(char str[],int inizio,int fine);
int main(int argc, char * argv[]){
char stringa[100];
gets(stringa);
printf("%d", contaDoppie(stringa));
return 0;
}

int contaDoppie(char seq[]){ /*abcd adda*/

int i, len, nDoppie;
char separatore;

nDoppie = 0;
separatore = ' ';
for (i = 0, len = 0; seq[i] != '\0'; i++, len++){
	if (seq[i] == separatore){
		if(ciSonoDoppie(seq, i-len, i-1)) /*i = len = 4 i = 8, len = 3*/
			nDoppie++;
		len = 0;
		}
	}
	if(ciSonoDoppie(seq, i-len, i-1))
		nDoppie++;
	return nDoppie;
}

int ciSonoDoppie(char str[],int inizio,int fine){ /*fine = 3 fine = 7, inizio = 5*/
	int i, ris;
	
	ris = 0;
	for (i = inizio; i < fine && !ris; i++){
			if (str[i] == str[i+1]) /*a == b, b == c, c == d, a == d, d == d*/
				ris = 1;
		}
	return ris;
}
