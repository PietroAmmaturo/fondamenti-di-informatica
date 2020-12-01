#include <stdio.h>
#define N 10
/*Si scriva un programma per visualizzare i primi 10 numeri della serie di Fibonacci. Nella serie di Fibonacci
(che inizia con i numeri 1, 1), ogni numero si ottiene sommando i due precedenti.
*/
int main(int argc, char*argv[]) {

	int nxt, lst, prv;
	prv = 1;
	last = 1;
	printf("%d ", prv);
	printf("%d ", lst);
	for(i = 2; i < 10; i++){
		nxt = lst + prv;
		printf("%d ", num);
		prv = lst;
		lst = nxt;
		}
		
	return 0;

}
