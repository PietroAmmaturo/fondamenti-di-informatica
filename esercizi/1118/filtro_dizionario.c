#include <stdio.h>
#define FILE_NAME_IN "./dizionario.txt"
#define FILE_NAME_OUT "./paroleTrovate.txt"
#define MAX_LEN 50

int isPrefix(char [], char []);


int main(int argc, char * argv[]){
	FILE * fi;
	FILE * fo;
	char parola[MAX_LEN + 1], tmp[MAX_LEN + 1];
	
	fi = fopen(FILE_NAME_IN, "r");
		if (fi) {
			fo = fopen(FILE_NAME_OUT, "w");
			if (fo) {
				scanf("%s", parola);
				while(fscanf(fi, "%s", tmp) != EOF){
					if(isPrefix(parola, tmp)){
						fprintf(fo, "%s\n", tmp);
					}
				}
				fclose(fo);
			} else {
				printf("errore nell'apertura del file: %s\n", FILE_NAME_OUT);
			}
		} else {
				printf("errore nell'apertura del file: %s\n", FILE_NAME_IN);
			}
	
	return 0;
}

int isPrefix(char s1[], char s2[]) {
	int i, uguali;
	
	uguali = 1;
	for(i = 0; s1[i] != '\0' && uguali == 1; i++) {
		if (s1[i] != s2[i]) {
			uguali = 0;
		}
	}
	return uguali;
}
