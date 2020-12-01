#include <stdio.h>
#define POS '+'
#define NEG '-'
#define ZERO ' '
int main(int argc, char*argv) {
	int val;
	char sym;
	
	scanf("%d", &val);
	if (val == 0)
	sym = ZERO;
	else if(val > 0)
			sym = POS;
		else
			sym = NEG;
	printf("%c\n", sym);	
   return 0;
}
