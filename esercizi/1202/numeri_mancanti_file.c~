
#include <stdio.h>
#include <stdlib.h>

elem_t * (char name[]){
	FILE * fp;
	int val;
	int count;
	elem_t * h;
	h = NULL;
	
	if(fp = fopen(name, "r")){
		fscanf(fp, "%d", &val);
		count = val;
		while (fscanf(fp, "%d", &val) != EOF){
			count++;
			if (val != count){
				h = append(h, count);
				count = val;
			}
		}
	} else {
		printf ("errore nell' apertura del file: %s\n", name);
	}
	return h;
}
