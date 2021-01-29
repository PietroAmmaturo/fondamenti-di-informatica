#include <stdio.h>
#include <string.h>
struct occorrenze_s{
	int valore;
	int cont;
}
/*
struct occorrenze_s{
	int valore;
	int cont;
}
*/
struct occ_float_s{
	float valore;
	int cont;
}

struct studente_s{
	char nome[LMAX+1], cognome[LMAX+1];
	char matricola[LMAT+1];
	char codper[LCP+1];
	int votoesami[NUMEX];
	int corsosicurezza;
	int cont;
}

typedef struct occorrenze_s{
	int valore;
	int cont;
} occorrenze_t;

