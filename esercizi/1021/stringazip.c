#include <stdio.h>
#include <string.h>
	/*comprime un testo es: aaaaabbbbbccc => a5b5c3*/ 
#define MAX_LEN 50
#define MAX_lenZip (MAX_LEN * 2)
#define ZERO_CHAR '0'
int main(int argc, char*argv[]) {

	int lenZip, i, count;
	char testp[MAX_LEN + 1], compresso[MAX_lenZip + 1];
	char curChar;
	
	scanf("%50s", testo);
	
	curChar = testo[0];
	count = 1;
	lenZip = 0;
	for(i = 1; testo[i] != '\0'; i++)
			if (curChar != testo[i]) {
				compresso[lenZip] = curChar;
				compresso[lenZip + 1] = ZERO_CHAR + count;
				lenZip += 2;
				
				curChar = testo[i];
				count = 1;
			} else
				count++;
	
	compresso[lenZip] = curChar;
	compresso[lenZip + 1] = ZERO_CHAR + count;
	compresso[lenZip + 2] = '\0';
	
	printf("%s\n", compresso);
	printf("\n");
		
	
	return 0 ;
}

