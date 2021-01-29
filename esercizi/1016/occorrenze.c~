#include <stdio.h>
#include <string.h>
/*riceve 100 interi e conta e visualizza quante volte è comparso nella sequenza*/

#define NINT 100
typedef struct occ_s{
	int valore;
	int cont;
} occ_t;

int main(int argc, char * argv[]){
	
	occ_t arr[NINT + 1];
	int i, nval, j, num, new;
	
	scanf("%d", &num);
	arr[0].valore = num;
	arr[0].cont = 1;
	nval = 1 ;
	for(i = 1; i < NINT; i++){
		scanf("%d", &num);
		new = 1;
		for(j = 0; j < nval; j++){
			if (num == arr[j].valore){
				arr[j].cont++;
				new = 0;
			}
		}
		if (new){
			arr[nval].valore = num;
			arr[nval].cont = 1;
			nval++;
			}
	}
	
	for(i = 0; i < nval; i++)
		printf("%d: %d\n", arr[i].valore, arr[i].cont);
	return 0;
}

