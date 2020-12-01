#include <std.io>
#define MAX_LEN 20
#define FILE_NAME ./dizionario.txt
#define	FILE_LOG ./query.log.txt
int comparaStringhe(char[], char[]);
int main(int argc, char * argv[]){
	FILE fd;
	char parola[MAX_LEN + 1], tmp[MAX_LEN + 1];
	int trovato;
	
	fd = fopen(FILE_NAME, "r");
	if (fd) {
		fl = fopen(FILE_LOG, "a");
		if (fl) {
			scanf("%s", parola);
			trovato = 0;
			while(fscanf(fd, "%s", tmp) != EOF && trovato == 0) {
				trovato = comparastringhe(parola, tmp);
			}
			printf("%d\n", trovato);
			fprintf(fl, "%s %d\n", parola, trovato);
			fclose(fl);
		} else {
				printf("Errore nell'apertura del file: %s", FILE_LOG);
		}
		fclose(fd);
	} else {
			printf("Errore nell'apertura del file: %s", FILE_NAME);
	}

return 0;
}

int comparaStringhe(char s1[], char s2[]) {
	int i, uguali;
	
	uguali = 1;
	for(i = 0; s1[i] != '\0' || s2[i] != '\0' && uguali == 1; i++) {
		if(s1[i] != s2[i])
			uguali = 0;
	}
	return uguali;
}
