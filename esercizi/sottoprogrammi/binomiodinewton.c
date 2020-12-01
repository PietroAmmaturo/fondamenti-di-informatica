#include <stdio.h>

int numerovalido(void);
int fattoriale(int);
/*acquisiti 2 numeri interi e positivi, n e k, con k<=n, e finchè non sono tali li richiede e visualizza il numero di combinazioni di n elementi presi k alla volta (binomiale n k)*/

int main(int argc, char * argv[]){
	int n, k, ris;
	
	do{
	n = numerovalido();
	k = numerovalido();
	}while (k > n);
	
	ris = fattoriale(n)/(fattoriale(n-k)*fattoriale(k));
	
	printf("%d", ris);
	return 0;
	}
	
int numerovalido(void) {
	int val;
	
	do{
		scanf("%d", &val);
	} while (val <= 0);
  
  return val;
}

int fattoriale(int val){
	int i;
	for(i = val-1; i > 0; i--)
		val = val*i;
	return val;
	}




