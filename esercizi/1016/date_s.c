#include <stdio.h>
#include <string.h>
/*acquisire 2 date e stamparle in ordine*/
#define LET 10
typedef struct date_s{
	int giorno;
	int mese;
	int anno;
} date_t;

typedef struct point_s{
	int x;
	int y; 
	char[LET + 1]; /*etichetta*/
} point_t;

int main(int argc, char*argv[]){
	
	date_t data1, data2 /*, datainiz, datafine; non servono*/ /*3 interi vanno in data1 e 3 interi in data2*/
	
	scanf("%d%d%d", &data1.giorno, &data1.mese, &data1.anno);
	scanf("%d%d%d", &data2.giorno, &data2.mese, &data2.anno);
	
	if (data1.anno > data2.anno){
		/*datainiz = data1; preferiamo non usarla*/
		/*datainiz.giorno = data1.giorno è lunga e non lo richiede la traccia
		datainiz.mese = data1.mese;
		datainiz.anno = data1.anno*/
		printf("%d %d %d\t", data1.giorno, data1.mese, data1.anno);
		printf("%d %d %d\n", data2.giorno, data2.mese, data2.anno);
	}else	if (data1.anno < data2.anno){
			printf("%d %d %d\t", data2.giorno, data2.mese, data2.anno);
			printf("%d %d %d\n", data1.giorno, data1.mese, data1.anno);
	} else {
	
	
	
	
	/*
	printf("%d %d %d\t", datainiz.giorno, datainiz.mese, datainiz.anno);
	printf("%d %d %d\n", datafine.giorno, datafine.mese, datafine.anno);
	*/
	return 0;
}

