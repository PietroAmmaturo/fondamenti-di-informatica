#include <std.io>
/*scrivere un programma che legge 100 interi da un file di testo ascii ./dati.txt e scrive i numeri presenti in 2 file: ./pari.txt e ./dispari.txt*/
/*VARIANTE: scrivere un programma che legge 100 interi o più da un file di testo ascii ./dati.txt e scrive i numeri primi presenti in ./primi.txt */
#define NVAL 100
#define FILEIN ./dati.txt
#define FILEP ./pari.txt
#define FILED ./dispari.txt
int main(int argc, char * argv[]){
	int err;
	if(fin = fopen(FILEIN, "r")){
		if(foutp = fopen(FILEP, "w")){
			if(foutd = fopen(FILED, "w")){
				for(i = 0; i < NVAL; i++){
					fscanf(fin, "%d", &num);
						if(num%2)
							fprintf(foutd, "%d\n", num);
						else
							fprintf(foutp, "%d\n", num);
				}
				fclose(foutd);
			}	else {
					printf("Problemi con il file %s\n", FILED);
			}
			fclose(foutd);
		}	else {
					printf("Problemi con il file %s\n", FILEP);
			}
		fclose(foutd);
	}	else {
				printf("Problemi con il file %s\n", FILEIN);
		}
return 0;
}
