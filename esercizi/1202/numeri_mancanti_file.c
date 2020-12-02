
#include <stdio.h>
#include <stdlib.h>

elem_t * (char name[]){
	FILE * fp;
	int val;
	int last;
	elem_t * h;
	h = NULL;
	
	if(fp = fopen(name, "r")){
		fscanf(fp, "%d", &val);
		while (fscanf(fp, "%d", &val) != EOF){
			if (val != last + 1){
				h = append(h, last + 1);
			}
			last = val;
		}
		fclose(fp);
	} else {
		printf ("errore nell' apertura del file: %s\n", name);
	}
	return h;
}
