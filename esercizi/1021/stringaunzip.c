#include <stdio.h>
#include <string.h>
	/*decomprime un testo es: a5b5c3 <= aaaaabbbbbccc*/ 

#define MAX_LEN_ZIP 50
#define ZERO_CHAR '0'
#define MAX_REPS 9
#define MAX_LEN ((MAX_LEN_ZIP/2)*MAX_REPS)
int main(int argc, char*argv[]) {

	int testoLen, i, count, j;
	char testo[MAX_LEN + 1], compresso[MAX_LEN_ZIP + 1];
	
	scanf("%50s", compresso);
	
	testoLen = 0;
	for(i = 0; compresso[i] != '\0'; i+=2){
		count = compresso[i + 1] - ZERO_CHAR;
		for (j = 0; j < count; j++){
			testo[testoLen] = compresso[i];
			testoLen++;
		}
	}
		testo[testoLen] = '\0';
		
	printf("%s\n", testo);
	printf("\n");
		
	
	return 0 ;
}

