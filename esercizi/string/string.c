#include <stdio.h>
#include <string.h>
#define LMAX 30
int main(int argc, char*argv[]) {
	char seq[LMAX + 1];
	
	scanf("%30s", &seq[0]); /*scanf("%30s", seq);*/  /*"%30s" indica che 30 è il massimo numero di caratteri acquisiti*/
	
	printf("%s", &seq[0]);
	
	/*gets(&seq[0]); è potenzialmente pericolosa*/
	 /*gets(seq);*/ 
	 
	printf("%s", &seq[0]); /*&seq[0] la & è necessaria perchè dice da dove cominciare, senza la & stamperebbe solo un carattere (il primo)*/
	/*printf("%s", seq);*/ 
	
	
	return 0 ;
}

