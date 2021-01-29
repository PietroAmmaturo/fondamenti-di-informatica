/*scrivere un programma che riceve da riga di comando la lunghezza di due sequenze di interi e un intero che vale 1 o 0 per indicare se verrà fornita una sequenza di pesi, il programma chiama poi il sottoprogramma distanza e visualizza il risultato
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define PESATA '1'

void distanza(int u[], int v[], float p[], int dim, float * dist, float * distp);

int main(int argc, char * argv[])
{
	char *strdim, *strpesi;
	int dim;
	int i;
	int * u, *v;
	float *p;
	float de, dep;
	
	if(argc == 3){
		strdim = argv[1];
		strpesi = argv[2];
		dim = atoi(strdim);
		if(u = malloc(sizeof(int) * dim)){
			if(v = malloc(sizeof(int) * dim)){
				for(i = 0; i < dim; i++)
					scanf("%d", (u + i));
				for(i = 0; i < dim; i++)
					scanf("%d", (v + i));
				
				if(atoi(strpesi)){
					if(p = malloc(sizeof(float) * dim)){
						for(i = 0; i < dim; i++)
							scanf("%f", (p + i));
							
					distanza(u, v, p, dim, &de, &dep);
					printf("%f\n", dep);
					free(p);
					} else {
						printf("errore allocazione %d reali\n", dim);
					}
				} else {
					p = NULL;
					distanza(u, v, p, dim, &de, &dep);
					printf("%f\n", de);
				}
				free(v);
			} else {
				printf("errore allocazione %d reali\n", dim);
			}
			free(u);
		} else {
			printf("errore allocazione %d reali\n", dim);
		}
	} else {
		printf("errore\n");
	}
	return 0;
}
void distanza(int u[], int v[], float p[], int dim, float * dist, float * distp)
{
	int i, somma, differenza, prodotto;
	float sommap;
	somma = 0;
	sommap = 0.0;
	if (p){
		for (i = 0; i < dim; i++){
			differenza = u[i] - v[i];
			prodotto = p[i] * differenza * differenza;
			sommap = sommap + prodotto;
		}
		*distp = sqrt(sommap);
	} else {
		for (i = 0; i < dim; i++){
			differenza = u[i] - v[i];
			prodotto = differenza * differenza;
			somma = somma + prodotto;
		}
		*dist = sqrt(somma);
	}
	return;
}
