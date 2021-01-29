#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100
#define END_STRING '\0'
#define END_WORD ' '
#define END_LINE '\n'
int main(int argc, char * argv[])
{
	char * filename = argv[1];
	FILE * fi;
	int numrig;
	int i;
	int totcar;
	int numcar;
	int medcar;
	int maxcar;
	char riga[MAX_LEN];
	char maxriga[MAX_LEN];
	
	if (argc == 2){
		fi = fopen(filename, "r");
		if(fi){
			fgets(maxriga, MAX_LEN, fi);
			if(!feof(fi)){
				/*contacaratteri in questo caso sono il massimo*/
				maxcar = 0;
				for(i = 0; maxriga[i] != END_LINE; i++)
					if(maxriga[i] != END_WORD)
						maxcar++;
				maxriga[i] = END_STRING;
				/*appena letta la prima riga*/
				if(maxcar > 0)
					numrig = 1;
				/*caratteri totali*/
				totcar = maxcar;
				fgets(riga, MAX_LEN, fi);
			}
			while(!feof(fi)){
				/*contacaratteri*/
				numcar = 0;
				for(i = 0; riga[i] != END_LINE; i++)
					if(riga[i] != END_WORD)
						numcar++;
				riga[i] = END_STRING;
				/*conta righe*/
				if(numcar > 0)
					numrig++;
				/*caratteri totali*/
				totcar += numcar;
				/*maxcaratteri e riga più lunga*/
				if (numcar > maxcar){
					maxcar = numcar;
					/*riga più lunga*/
					for(i = 0; riga[i] != END_STRING; i++){
						maxriga[i] = riga[i];
					}
				}
				fgets(riga, MAX_LEN, fi);
			}
		} else {
			printf("errore nell'apertura del file: %s", filename);
		}
		/*numero medio*/
		medcar = totcar / numrig;
		printf("%d\n%d\n%d %d\n%s\n",
		numrig, totcar, maxcar, medcar, maxriga);
	} else {
			printf("errore nell'acquisizione da riga di comando");
	}
	return 0;
}
