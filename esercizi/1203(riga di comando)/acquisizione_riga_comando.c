#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	char* nameprogr;
	char * valstr;
	char * bin;
	int val;
	
	/*metto un riferimento al nome del mio eseguibile*/
	nameprogr = argv[0];
	if(argc == 2){/*c'è un parametro in ingresso*/
		valstr = argv[1]; /*metto un riferimento così ho un nome significativo*/
		val = atoi(valstr); /*restituisce l' intero corrispondente alla stringa*/
		bin = int2bin(val);
		printf("%d_10 === %s_2\n", val, bin);
		/*oppure*/
		printf("%d_10 === %s_2\n", val, bin);
		free(bin); /*senz'altro allocazione dinemica*/
	} else {
		printf("%s: errore -- il programma vuole un parametro (intero) in ingresso", nomeprogr);
	}
	return 0;
}

