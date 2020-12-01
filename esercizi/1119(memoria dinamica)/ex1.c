/*chiede all'utente quanti valori interi acquisire, li acquisisce e li visualizza in ordine inverso*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int n;
	int * v;	/* v[DIM]*/ /* v[pos] ==== (v + pos)*/
	scanf("%d", &n);
	v = malloc(n* sizeof(int));
		if(v != NULL)/*se l'allocazione è andata a buon fine */{
			for (i = 0; i < n; i++)
				scanf("%d", (v + i));
			
			for(i--; i >= 0; i--)
				print("%d\n", *(v + i));
		
			free(v);
		}else
			printf("errore allocazione memoria per %d interi\n", n);




	return 0;
}
