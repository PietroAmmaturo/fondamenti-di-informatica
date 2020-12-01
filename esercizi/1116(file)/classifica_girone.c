#include <std.io>
#define MAX_LEN 50
#define FILE_NAME ./partiteGirone.txt
#define NUM_PAR 6
int comparaStringhe(char[], char[]);
int main(int argc, char * argv[]){
	FILE fin, fout;
	char nome[MAX_LEN + 1];
	int punti, tmp;
	
	fin = fopen(FILEIN, "r");
	if (fin) {
		fout = fopen(FILEOUT, "w");
		if (fout){
			while(fscanf(fin, "%s", nome) != EOF) {
				punti = 0;
				for(i = 0; i < PARTITE; i++){
					fscanf(fin, "%d", &tmp);
					punti += tmp;
				}
				fprintf(fout, "%s %d\n", nome, punti);
			}
			fclose(fo);
		} else {
			printf("Errore apertura del file");
		}
	
return 0;
}


