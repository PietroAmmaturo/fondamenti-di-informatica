
#include <stdio.h>
#include <stdlib.h>

#define FILE_OUT "fibonacci_10.txt"
#define STOP '.'
int * nextLine (int * prevline, int n);
int main(int argc, char * argv[]){
	FILE * fp;
	char filename[20] = FILE_OUT;
	int i, j, n;
	int * line;
	int lennextline;
	
	*line = 0;
	lennextline = 0;
	for (i = 0; filename[i] != STOP; i++)
		;
	n = 10;
	printf("%d\n", n);
	if(fp = fopen(FILE_OUT, "w"))
	{
		if (line = malloc(i * sizeof(int)))
			{
			for (i = 0; i < n; i++)
			{	
				lennextline = i + 1;
				line = nextLine(line, lennextline);
				for (j = 0; j < lennextline; j++)
				{
					fprintf(fp, "%d ", *(line + j));
				}
				fprintf(fp, "\n");
			}
			free(line);
		} else {
			printf("errore nell' allocare memoria per: %d interi\n", i);
		}
	} else {
		printf("errore nell' apertura del file: %s\n", filename); 
	}


	return 0;
}

int * nextLine (int * prevline, int nextlinelen){/*il numero di ogni riga precedente è uno in meno della successiva*/
	int i;
	int * nextline;
	int prevlinelen;
	prevlinelen = nextlinelen - 1;
	
	
	if (nextlinelen != 1){
	if(nextline = malloc(nextlinelen * sizeof(int))){
		*nextline = 1;
		for (i = 1; i < prevlinelen; i++){
			*(nextline + i) = *(prevline + i - 1) + *(prevline + i);
		}
		*(nextline + i) = 1;
		free(prevline);
		return nextline;
	} else {
		printf("errore nell' allocare memoria per: %d interi\n", (nextlinelen));
	}
	}
	*prevline = 1;
	
	return prevline;
}
