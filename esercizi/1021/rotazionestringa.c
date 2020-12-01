#include <stdio.h>
#include <string.h>
	/*ruota la stringa abcdef => fabcde*/ 
#define MAX_LEN 50

int main(int argc, char*argv[]) {

	int i;
	char testo[MAX_LEN + 1];
	char tmp, prev;
	
	scanf("%s", testo);
	
	prev = testo[0];
	for (i = 1; testo[i] != '\0'; i++){
		tmp = testo[i];
		testo[i] = prev;
		prev = tmp;
	}
	testo[0] = prev;
	
	printf("%s\n", testo);
	
	return 0 ;
}

